#include "expertForm.h"

DefectClass defect;
FeatureClass feature;
TypesFeatureClass typesFeature;

feature_data dataFeature;
defect_data dataDefect;
typesFeature_data dataTypesFeature;

struct allTech {
    std::string defect;
    std::string feature;
    std::string state;
};

struct searchTech {
    std::string featureSearch;
    std::string stateSearch;

    searchTech(const std::string& feature, const std::string& state)
        : featureSearch(feature), stateSearch(state) {}
};

std::vector<allTech> allVector;
std::vector<searchTech> searchVector;

std::string vectorVariable;
std::string toAdd;

// Первое отображение формы
System::Void mitips::expertForm::expertForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

////////////////////////////////////////////////////////////////////////////////////////////
// 1 ФОРМА
// /////////////////////////////////////////////////////////////////////////////////////////

// НЕИСПРАВНОСТИ КНОПКА ОБНОВИТЬ
System::Void mitips::expertForm::buttonDefectUpdate_Click(System::Object^ sender, System::EventArgs^ e)
{
    listBoxDefect->Items->Clear();
    std::string sqll = "SELECT * FROM defect";
    System::Collections::Generic::List<System::Object^>^ dataList = gcnew System::Collections::Generic::List<System::Object^>();
    try {
        connectToSql();
        try
        {
            res = stmt->executeQuery(sqll);
            while (res->next()) {
                System::String^ defectStr = converterFromstrToSTR(res->getString("name"));
                dataList->Add(defectStr);
            }
            // Преобразование списка в массив и добавление элементов в ListBox
            listBoxDefect->Items->AddRange(dataList->ToArray());
            delete res;
            delete stmt;
            delete con;
        }
        catch (sql::SQLException e)
        {
            MessageBox::Show("Ошибка в запросе!", "Ошибка!");
        }
    }
    catch (sql::SQLException e) {
        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
    }
}

// ВЫБОР НАЗВАНИЯ НЕИСПРАВНОСТИ
System::Void mitips::expertForm::listBoxDefect_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxDefect->SelectedItem != nullptr) {
        String^ selectedName = listBoxDefect->SelectedItem->ToString();
        std::string name = converterFromStringFormToUtf8(selectedName);
        dataDefect.name = name;
    }
}

// НЕИСПРАВНОСТЬ КНОПКА ДОБАВИТЬ
System::Void mitips::expertForm::buttonDefectAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string name = converterFromStringFormToUtf8(textBoxDefectAdd->Text->ToString());
    if (name != "") {
        defect.Add(name);
    }
    else { MessageBox::Show("Поле название неисправности пустое!", "Ошибка!"); }
}

// НЕИСПРАВНОСТЬ КНОПКА УДАЛИТЬ
System::Void mitips::expertForm::buttonDefectDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    defect.Delete(dataDefect.name);
}

////////////////////////////////////////////////////////////////////////////////////////////
// 2 ФОРМА
// /////////////////////////////////////////////////////////////////////////////////////////

// ПРИЗНАКИ КНОПКА ОБНОВИТЬ
System::Void mitips::expertForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    listBox1->Items->Clear();
    std::string sqll = "SELECT * FROM feature";
    System::Collections::Generic::List<System::Object^>^ dataList = gcnew System::Collections::Generic::List<System::Object^>();
    try {
        connectToSql();
        try
        {
            res = stmt->executeQuery(sqll);
            while (res->next()) {
                System::String^ featureStr = converterFromstrToSTR(res->getString("name"));
                dataList->Add(featureStr);
            }
            // Преобразование списка в массив и добавление элементов в ListBox
            listBox1->Items->AddRange(dataList->ToArray());
            delete res;
            delete stmt;
            delete con;
        }
        catch (sql::SQLException e)
        {
            MessageBox::Show("Ошибка в запросе!", "Ошибка!");
        }
    }
    catch (sql::SQLException e) {
        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
    }
}

// ВЫБОР НАЗВАНИЯ ПРИЗНАКА
System::Void mitips::expertForm::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBox1->SelectedItem != nullptr) {
        String^ selectedName = listBox1->SelectedItem->ToString();
        std::string name = converterFromStringFormToUtf8(selectedName);
        dataFeature.name = name;
    }
}
// ПРИЗНАК КНОПККА ДОБАВИТЬ
System::Void mitips::expertForm::buttonFeatureAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string name = converterFromStringFormToUtf8(textBoxFeatureAdd->Text->ToString());
    if (name != "") {
        feature.Add(name, "Исправно");
    }
    else { MessageBox::Show("Поле название неисправности пустое!", "Ошибка!"); }
}

// ПРИЗНАК КНОПКА УДАЛИТЬ
System::Void mitips::expertForm::buttonFeatureDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    feature.Delete(dataFeature.name);
}

////////////////////////////////////////////////////////////////////////////////////////////
// 3 ФОРМА
// /////////////////////////////////////////////////////////////////////////////////////////

// ПРИЗНАК ДЛЯ ВЫБОРА КНОПКА ОБНОВИТЬ
System::Void mitips::expertForm::buttonFeatureForSelectUpdate_Click(System::Object^ sender, System::EventArgs^ e)
{
    listBoxFeatureForSelect->Items->Clear();
    std::string sqll = "SELECT * FROM feature";
    System::Collections::Generic::List<System::Object^>^ dataList = gcnew System::Collections::Generic::List<System::Object^>();
    try {
        connectToSql();
        try
        {
            res = stmt->executeQuery(sqll);
            while (res->next()) {
                System::String^ featureStr = converterFromstrToSTR(res->getString("name"));
                dataList->Add(featureStr);
            }
            // Преобразование списка в массив и добавление элементов в ListBox
            listBoxFeatureForSelect->Items->AddRange(dataList->ToArray());
            delete res;
            delete stmt;
            delete con;
        }
        catch (sql::SQLException e)
        {
            MessageBox::Show("Ошибка в запросе!", "Ошибка!");
        }
    }
    catch (sql::SQLException e) {
        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
    }
}


// ЗНАЧЕНИЕ ПРИЗНАКА КНОПКА ДОБАВИТЬ
System::Void mitips::expertForm::buttonTypesFeatureAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string name = converterFromStringFormToUtf8(textBoxTypesFeatureAdd->Text->ToString());
    //std::string id_feature = std::to_string(dataTypesFeature.id);
    if (name != "") {
        typesFeature.Add(dataTypesFeature.id, name, dataFeature.name);
    }
    else { MessageBox::Show("Поле значения пустое!", "Ошибка!"); }
}

// ЗНАЧЕНИЕ ПРИЗНАКА КНОПКА УДАЛИТЬ
System::Void mitips::expertForm::buttonTypesFeatureDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    typesFeature.Delete(dataFeature.name, dataTypesFeature.name);
}

// ВЫБОР ПРИЗНАКА ДЛЯ ЗНАЧЕНИЙ ПРИЗНАКА
System::Void mitips::expertForm::listBoxFeatureForSelect_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxFeatureForSelect->SelectedItem != nullptr) {
        String^ selectedName = listBoxFeatureForSelect->SelectedItem->ToString();
        std::string name = converterFromStringFormToUtf8(selectedName);
        dataFeature.name = name;

        listBoxTypesFeature->Items->Clear(); // "SELECT * FROM users where fio = '" + fio + "' AND post = '" + usersData.post + "'";
        std::string sqll = "SELECT types_feature.id_feature, types_feature.name FROM types_feature join feature ON types_feature.id_feature = feature.id where feature.name = '" + dataFeature.name + "'";
        System::Collections::Generic::List<System::Object^>^ dataList = gcnew System::Collections::Generic::List<System::Object^>();
        try {
            connectToSql();
            try
            {
                res = stmt->executeQuery(sqll);
                while (res->next()) {
                    dataTypesFeature.id = res->getInt(2);
                    System::String^ typesFeatureStr = converterFromstrToSTR(res->getString("name"));
                    dataList->Add(typesFeatureStr);
                }
                // Преобразование списка в массив и добавление элементов в ListBox
                listBoxTypesFeature->Items->AddRange(dataList->ToArray());
                delete res;
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Ошибка в запросе!", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
    }
}

System::Void mitips::expertForm::listBoxTypesFeature_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxTypesFeature->SelectedItem != nullptr) {
        String^ selectedName = listBoxTypesFeature->SelectedItem->ToString();
        std::string name = converterFromStringFormToUtf8(selectedName);
        dataTypesFeature.name = name;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////
// 4 ФОРМА
// /////////////////////////////////////////////////////////////////////////////////////////

// КНОПКА ОБНОВЛЕНИЕ ТАБЛИЦ НОРМАЛЬНЫХ ЗНАЧЕНИЙ ПРИЗНАКОВ
System::Void mitips::expertForm::buttonNormalStateFeatureUpdate_Click(System::Object^ sender, System::EventArgs^ e)
{
    listBoxNormalStateFeature->Items->Clear();
    listBoxNormalState->Items->Clear();
    std::string sqll = "SELECT * FROM feature";
    System::Collections::Generic::List<System::Object^>^ dataListName = gcnew System::Collections::Generic::List<System::Object^>();
    System::Collections::Generic::List<System::Object^>^ dataListNormalState = gcnew System::Collections::Generic::List<System::Object^>();
    try {
        connectToSql();
        try
        {
            res = stmt->executeQuery(sqll);
            while (res->next()) {
                System::String^ featureName = converterFromstrToSTR(res->getString("name"));
                System::String^ featureNormalState = converterFromstrToSTR(res->getString("normal_state"));
                dataListName->Add(featureName);
                dataListNormalState->Add(featureNormalState);
                
            }
            // Преобразование списка в массив и добавление элементов в ListBox
            listBoxNormalStateFeature->Items->AddRange(dataListName->ToArray());
            listBoxNormalState->Items->AddRange(dataListNormalState->ToArray());
            delete res;
            delete stmt;
            delete con;
        }
        catch (sql::SQLException e)
        {
            MessageBox::Show("Ошибка в запросе!", "Ошибка!");
        }
    }
    catch (sql::SQLException e) {
        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
    }
}

// ВЫБОР ПРИЗНАКА ДЛЯ ЗНАЧЕНИЙ ПРИЗНАКА
System::Void mitips::expertForm::listBoxNormalStateFeature_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxNormalStateFeature->SelectedItem != nullptr) {
        String^ selectedName = listBoxNormalStateFeature->SelectedItem->ToString();
        std::string name = converterFromStringFormToUtf8(selectedName);
        dataFeature.name = name;

        listBoxNormalStateSelect->Items->Clear();
        std::string sqll = "SELECT types_feature.id_feature, types_feature.name FROM types_feature join feature ON types_feature.id_feature = feature.id where feature.name = '" + name + "'";
        System::Collections::Generic::List<System::Object^>^ dataList = gcnew System::Collections::Generic::List<System::Object^>();
        try {
            connectToSql();
            try
            {
                res = stmt->executeQuery(sqll);
                while (res->next()) {
                    // dataTypesFeature.id = res->getInt(2);
                    System::String^ typesFeatureStr = converterFromstrToSTR(res->getString("name"));
                    dataList->Add(typesFeatureStr);
                }
                // Преобразование списка в массив и добавление элементов в ListBox
                listBoxNormalStateSelect->Items->AddRange(dataList->ToArray());
                delete res;
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Ошибка в запросе!", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
    }
}

// Выбор нормального значения для признака 
System::Void mitips::expertForm::listBoxNormalStateSelect_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxNormalStateSelect->SelectedItem != nullptr) {
        String^ selectedNormalState = listBoxNormalStateSelect->SelectedItem->ToString();
        std::string state = converterFromStringFormToUtf8(selectedNormalState);
        //dataFeature.normal_state = state;

        std::string sqll = "UPDATE feature SET normal_state = '" + state + "' WHERE name = '" + dataFeature.name + "'";
        try {
            connectToSql();
            try
            {
                stmt->executeQuery(sqll);
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                // MessageBox::Show("Ошибка в запросе!", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            //
            //
            //MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////
// 5 ФОРМА
// /////////////////////////////////////////////////////////////////////////////////////////

// КНОПКА ОБНОВИТЬ СПИСКА ДЕФЕКТОВ В ТЕХ КАРТИНЕ
System::Void mitips::expertForm::buttonTechUpdate_Click(System::Object^ sender, System::EventArgs^ e)
{
    listBoxTechDefect->Items->Clear();
    std::string sqll = "SELECT * FROM defect";
    System::Collections::Generic::List<System::Object^>^ dataList = gcnew System::Collections::Generic::List<System::Object^>();
    try {
        connectToSql();
        try
        {
            res = stmt->executeQuery(sqll);
            while (res->next()) {
                // dataTypesFeature.id = res->getInt(2);
                System::String^ typesFeatureStr = converterFromstrToSTR(res->getString("name"));
                dataList->Add(typesFeatureStr);
            }
            // Преобразование списка в массив и добавление элементов в ListBox
            listBoxTechDefect->Items->AddRange(dataList->ToArray());
            delete res;
            delete stmt;
            delete con;
        }
        catch (sql::SQLException e)
        {
            MessageBox::Show("Ошибка в запросе!", "Ошибка!");
        }
    }
    catch (sql::SQLException e) {
        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
    }

    
}

// СОБЫТИЕ ПРИ НАЖАТИИ НА СПИСОК ДЕФЕКТОВ
System::Void mitips::expertForm::listBoxTechDefect_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxTechDefect->SelectedItem != nullptr) {
        String^ selectedName = listBoxTechDefect->SelectedItem->ToString();
        std::string name = converterFromStringFormToUtf8(selectedName);
        dataDefect.name = name;


        listBoxTechFeature->Items->Clear();
        listBoxTechState->Items->Clear();
        labelTechState->Text = "";
        std::string sqll = "SELECT f.name FROM feature AS f INNER JOIN tech_img AS ti ON f.id = ti.id_feature INNER JOIN defect AS d ON ti.id_defect = d.id WHERE d.name = '" + dataDefect.name + "'";
        System::Collections::Generic::List<System::Object^>^ dataList = gcnew System::Collections::Generic::List<System::Object^>();
        try {
            connectToSql();
            try
            {
                res = stmt->executeQuery(sqll);
                while (res->next()) {
                    // dataTypesFeature.id = res->getInt(2);
                    System::String^ FeatureStr = converterFromstrToSTR(res->getString("name"));
                    dataList->Add(FeatureStr);
                }
                // Преобразование списка в массив и добавление элементов в ListBox
                listBoxTechFeature->Items->AddRange(dataList->ToArray());
                delete res;
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Ошибка в запросе!", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }

        listBox->Items->Clear();
        sqll = "SELECT * FROM feature";
        try {
            connectToSql();
            System::Collections::Generic::List<System::Object^>^ toRemoveList = gcnew System::Collections::Generic::List<System::Object^>();


            try
            {
                res = stmt->executeQuery(sqll);
                while (res->next()) {
                    // dataTypesFeature.id = res->getInt(2);
                    System::String^ FeatureStr = converterFromstrToSTR(res->getString("name"));
                    toRemoveList->Add(FeatureStr);
                }
                // Преобразование списка в массив и добавление элементов в ListBox
                for each (System::Object ^ item in dataList) {
                    while (toRemoveList->Contains(item)) {
                        toRemoveList->Remove(item);
                    }
                }
                listBox->Items->AddRange(toRemoveList->ToArray());
                delete res;
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Ошибка в запросе!", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
    }
}

// СОБЫТИЕ ПРИ НАЖАТИИ НА СПИСОК ПРИЗНАКОВ
System::Void mitips::expertForm::listBoxTechFeature_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxTechFeature->SelectedItem != nullptr) {
        String^ selectedName = listBoxTechFeature->SelectedItem->ToString();
        std::string name = converterFromStringFormToUtf8(selectedName);
        dataFeature.name = name;
        //labelTechState->Text = "";

        listBoxTechState->Items->Clear();
        std::string sqll = "SELECT * FROM types_feature where id_feature = (SELECT id FROM feature WHERE name = '" + name + "')";
        System::Collections::Generic::List<System::Object^>^ dataList = gcnew System::Collections::Generic::List<System::Object^>();
        try {
            connectToSql();
            try
            {
                res = stmt->executeQuery(sqll);
                while (res->next()) {
                    // dataTypesFeature.id = res->getInt(2);
                    System::String^ typesFeatureStr = converterFromstrToSTR(res->getString("name"));
                    dataList->Add(typesFeatureStr);
                }
                // Преобразование списка в массив и добавление элементов в ListBox
                listBoxTechState->Items->AddRange(dataList->ToArray());
                delete res;
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Ошибка в запросе!", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }

        sqll = "SELECT * FROM tech_img where id_feature = (SELECT id FROM feature WHERE name = '" + name + "')";
        try {
            connectToSql();
            try
            {
                res = stmt->executeQuery(sqll);
                while (res->next()) {
                    // dataTypesFeature.id = res->getInt(2);
                    labelTechState->Text = converterFromstrToSTR(res->getString("state"));
                }
                // Преобразование списка в массив и добавление элементов в ListBox
              //  labelTechState->Text = converterFromstrToSTR(state);
                delete res;
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Ошибка в запросе!", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
    }
}

// СОБЫТИЕ ПРИ НАЖАТИИ НА СПИСОК ЗНАЧЕНИЙ ПРИЗНАКОВ
System::Void mitips::expertForm::listBoxTechState_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxTechState->SelectedItem != nullptr) {
        String^ selectedState = listBoxTechState->SelectedItem->ToString();
        std::string state = converterFromStringFormToUtf8(selectedState);
        //  dataFeature.name = name; 
        std::string sqll = "UPDATE tech_img SET state = '" + state + "' where (id_defect = (select id from defect where name = '" + dataDefect.name + "') AND id_feature = (SELECT id FROM feature WHERE name = '" + dataFeature.name + "'))";
        try {
            connectToSql();
            try
            {
                stmt->executeQuery(sqll);
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                // MessageBox::Show("Ошибка в запросе!", "Ошибка!");
            }
            labelTechState->Text = converterFromstrToSTR(state);
        }
        catch (sql::SQLException e) {
            //
            //
            //MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
    }
    
}

System::Void mitips::expertForm::listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBox->SelectedItem != nullptr) {
        String^ selectedFeature = listBox->SelectedItem->ToString();
        toAdd = converterFromStringFormToUtf8(selectedFeature);
        //dataFeature.normal_state = state;
    }
}

// КНОПКА ДОБАВИТЬ ПРИЗНАК ДЛЯ ТЕХ КАРТИНЫ
System::Void mitips::expertForm::buttonTechAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    //UPDATE tech_img SET state = '" + state + "' where (id_defect = (select id from defect where name = '" + dataDefect.name + "') AND id_feature = (SELECT id FROM feature WHERE name = '" + dataFeature.name + "'))";
    int count = counterData("select count(*) from tech_img where (id_defect = (select id from defect where name = '" + dataDefect.name + "') AND id_feature = (SELECT id FROM feature WHERE name = '" + toAdd + "'))");
    if (count == 0) {
        try {
            connectToSql();
            try
            {
                //INSERT INTO tech_img (id_defect, id_feature, state) VALUES((SELECT id FROM defect WHERE name = 'Имя дефекта'),(SELECT id FROM feature WHERE name = 'Имя функции'),'Состояние');
                pstmt = con->prepareStatement("INSERT INTO tech_img (id_defect, id_feature, state) VALUES((SELECT id FROM defect WHERE name = '" + dataDefect.name + "'),(SELECT id FROM feature WHERE name = '" + toAdd + "'),'---')");
               // pstmt->setString(1, name);
               // pstmt->setString(2, normal_state);
                pstmt->execute();
                MessageBox::Show(" добавлен!", "Успех!");
                delete con;
                delete pstmt;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Не удалось добавить! (проверьте входные данные)", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
    }
    else { MessageBox::Show("Такая запись уже есть!", "Ошибка!"); }
}

// КНОПКА УДАЛИТЬ ПРИЗНАК ИЗ ТЕХ КАРТИНЫ
System::Void mitips::expertForm::buttonTechDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    int count = counterData("select count(*) from tech_img where (id_defect = (select id from defect where name = '" + dataDefect.name + "') AND id_feature = (SELECT id FROM feature WHERE name = '" + dataFeature.name + "'))");
    if (count != 0) {
        try {
            connectToSql();
            try
            {
                stmt->execute("DELETE FROM tech_img where (id_defect = (select id from defect where name = '" + dataDefect.name + "') AND id_feature = (SELECT id FROM feature WHERE name = '" + dataFeature.name + "'))");
                MessageBox::Show(" удален!", "Успех!");
                delete con;
                delete stmt;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Не удалось удалить признак! (проверьте входные данные)", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
    }
    else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
}

////////////////////////////////////////////////////////////////////////////////////////////
// 6 ФОРМА
// /////////////////////////////////////////////////////////////////////////////////////////

// СОБЫТИЕ ПРИ НАЖАТИИ НА СПИСОК ПРИЗНАКОВ
System::Void mitips::expertForm::listBoxAllFeatureRead_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxAllFeatureRead->SelectedItem != nullptr) {
        String^ selectedName = listBoxAllFeatureRead->SelectedItem->ToString();
        std::string name = converterFromStringFormToUtf8(selectedName);
        //dataFeature.name = name;
        //labelTechState->Text = "";

     // listBoxSelectedFeature->Items->Clear();
        listBoxSelectedFeature->Items->Add(selectedName);
        listBoxStateForFeature->Items->Clear();

        while (this->listBoxAllFeatureRead->Items->Contains(selectedName)) {
            int index = this->listBoxAllFeatureRead->Items->IndexOf(selectedName);
            this->listBoxAllFeatureRead->Items->RemoveAt(index);
        }
    }
}

// КНОПКА ОБНОАВИТЬ СПИСОК ВСЕХ ТАБЛИЦ 
System::Void mitips::expertForm::buttonAllReadUpdate_Click(System::Object^ sender, System::EventArgs^ e)
{
    listBoxAllFeatureRead->Items->Clear();
    listBoxSelectedFeature->Items->Clear();
    listBoxStateForFeature->Items->Clear();
    labelState->Text ="Ничего не выбрано";
    for (auto it = allVector.begin(); it != allVector.end(); ) {
       it = allVector.erase(it);
    }


    std::string sqll = "SELECT * FROM feature";
    System::Collections::Generic::List<System::Object^>^ dataList = gcnew System::Collections::Generic::List<System::Object^>();
    try {
        connectToSql();
        try
        {
            res = stmt->executeQuery(sqll);
            while (res->next()) {

                System::String^ FeatureStr = converterFromstrToSTR(res->getString("name"));
                dataList->Add(FeatureStr);
            }
            // Преобразование списка в массив и добавление элементов в ListBox
            delete res;
            delete stmt;
            delete con;
        }
        catch (sql::SQLException e)
        {
            MessageBox::Show("Ошибка в запросе!", "Ошибка!");
        }
    }
    catch (sql::SQLException e) {
        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
    }

    sqll = "SELECT d.name AS defect_name, f.name AS feature_name, ti.state FROM tech_img ti INNER JOIN defect d ON ti.id_defect = d.id INNER JOIN feature f ON ti.id_feature = f.id";
      try {
        connectToSql();
 
        try
        {
            res = stmt->executeQuery(sqll);
            allTech all;
            while (res->next()) {
                all.defect = res->getString("defect_name");
                all.feature = res->getString("feature_name");
                all.state = res->getString("state");

                // Добавляем его в вектор
                allVector.push_back(all);
            }
            // Преобразование списка в массив и добавление элементов в ListBox
            listBoxAllFeatureRead->Items->AddRange(dataList->ToArray());
            delete res;
            delete stmt;
            delete con;
        }
        catch (sql::SQLException e)
        {
            MessageBox::Show("Ошибка в запросе!", "Ошибка!");
        }
    }
    catch (sql::SQLException e) {
        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
    }
}

// СОБЫТИЕ НА СПИСКЕ ВЫБРАННЫЕ ПРИЗНАКИ
System::Void mitips::expertForm::listBoxSelectedFeature_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxSelectedFeature->SelectedItem != nullptr) {
        String^ selectedName = listBoxSelectedFeature->SelectedItem->ToString();
        std::string name = converterFromStringFormToUtf8(selectedName);
        vectorVariable = name;

        listBoxStateForFeature->Items->Clear();
        std::string sqll = "SELECT * FROM types_feature where id_feature = (SELECT id FROM feature WHERE name = '" + name + "')";
        System::Collections::Generic::List<System::Object^>^ dataList = gcnew System::Collections::Generic::List<System::Object^>();
        try {
            connectToSql();
            try
            {
                res = stmt->executeQuery(sqll);
                while (res->next()) {
                    System::String^ typesFeatureStr = converterFromstrToSTR(res->getString("name"));
                    dataList->Add(typesFeatureStr);
                }
                // Преобразование списка в массив и добавление элементов в ListBox
                listBoxStateForFeature->Items->AddRange(dataList->ToArray());

                bool exists = false;
                for (searchTech& tech : searchVector) {
                    if (tech.featureSearch == name) {
                        exists = true;
                        break;
                    }
                }

                if (exists == false) {
                    searchVector.emplace_back(name, "nothing");
                }

                for (searchTech& tech : searchVector) {
                    if (tech.featureSearch == name) {
                        labelState->Text = converterFromstrToSTR(tech.stateSearch);
                        break;
                    }
                }
                delete res;
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Ошибка в запросе!", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
    }
}

// КНОПКА УДАЛИТЬ ВЫБРАННЫЙ ПРИЗНАК
System::Void mitips::expertForm::buttonCheckDeleteFeature_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxSelectedFeature->SelectedItem != nullptr) {
        String^ selectedName = listBoxSelectedFeature->SelectedItem->ToString();
        std::string name = converterFromStringFormToUtf8(selectedName);

        listBoxAllFeatureRead->Items->Add(selectedName);

        while (this->listBoxSelectedFeature->Items->Contains(selectedName)) {
            int index = this->listBoxSelectedFeature->Items->IndexOf(selectedName);
            this->listBoxSelectedFeature->Items->RemoveAt(index);

            for (auto it = searchVector.begin(); it != searchVector.end(); ) {
                if (it->featureSearch == name) {
                    it = searchVector.erase(it);
                }
                else {
                    ++it;
                }
            }

        }
    }
}

//for (auto it = searchVector.begin(); it != searchVector.end(); ) {
//
//    listBoxDefect->Items->Add(converterFromstrToSTR(it->featureSearch + " - " + it->stateSearch));
//    ++it;
//}

// СОБЫТИЕ ПРИ НАЖАТИИ НА ЗНАЧЕНИЯ ДЛЯ ПРИЗНАКА
System::Void mitips::expertForm::listBoxStateForFeature_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (listBoxStateForFeature->SelectedItem != nullptr) {
        String^ selectedState = listBoxStateForFeature->SelectedItem->ToString();
        std::string state = converterFromStringFormToUtf8(selectedState);
        //  dataFeature.name = name; 


        for (searchTech& tech : searchVector) {
            if (tech.featureSearch == vectorVariable) {
                // Если найдено совпадение, изменяем stateSearch
                tech.stateSearch = state;
                labelState->Text = selectedState;
            }
        }
    }
}

// ПРОВЕРКА СОВПАДЕНИЙ
bool matchDefect(const std::vector<allTech>& allVector, const std::string& defect, const searchTech& search) {
    for (const auto& item : allVector) {
        if (item.defect == defect && item.feature == search.featureSearch && item.state == search.stateSearch) {
            return true;
        }
    }
    return false;
}

// ПОИСК НЕИСПРАВНОСТИ
System::Void mitips::expertForm::buttonCheck_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::vector<std::string> uniqueDefects;
    for (const auto& item : allVector) {
        if (std::find(uniqueDefects.begin(), uniqueDefects.end(), item.defect) == uniqueDefects.end()) {
            uniqueDefects.push_back(item.defect);
        }
    }

    bool ch = false;
    for (const auto& defect : uniqueDefects) {
        bool allMatch = true;
        for (const auto& search : searchVector) {
            if (!matchDefect(allVector, defect, search)) {
                allMatch = false;
                break;
            }
        }
        if (allMatch) {
            ch = true;
            MessageBox::Show(converterFromstrToSTR(defect) + " - полностью соответствует всем условиям поиска!");
        }
    }
    if (ch == false) {
        MessageBox::Show("Не найдено неисправностей удовлетворяющих условий поиска!");
    }
}


// КПОПКА ОБНОВИТЬ ТАБЛИЦУ ЗНАНИЙ
System::Void mitips::expertForm::buttonZnanijaUpdate_Click(System::Object^ sender, System::EventArgs^ e)
{
    for (auto it = allVector.begin(); it != allVector.end(); ) {

     listBoxZnanija->Items->Add(converterFromstrToSTR(it->defect + " - " + it->feature + " - " + it->state));
     ++it;
    }
}




