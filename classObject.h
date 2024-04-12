#pragma once
#pragma once
#include "Functions.h"

struct defect_data
{
    int id;
    std::string name;
};

struct feature_data
{
    int id;
    std::string name, normal_state;
};

struct typesFeature_data
{
    int id;
    std::string name;
};

struct techImg_data
{
    int id, id_defect, id_feature;
    std::string name;
};

struct users_data
{
    std::string fio,post;
};

extern users_data dataUsers;
extern feature_data dataFeature;
extern int minimumOneSubClient; // глобальная переменная для передачи id клиента для проверок

extern std::string title;
extern std::string digit;
extern std::string rus;
extern std::string eng;
extern std::string any_symbol;
extern std::string space;
extern std::string worker;

// запрос количества записей
inline int counterData(std::string countSql)
{
    try {
        connectToSql();
        try
        {
            int i;
            res = stmt->executeQuery(countSql);
            while (res->next()) {
                i = res->getInt(1);
            }
            delete res;
            delete stmt;
            return i;
        }
        catch (sql::SQLException e)
        {
            return 0;
            MessageBox::Show("Не удалось подсчитать количество записей! (проверьте входные данные)", "Ошибка!");
        }
    }
    catch (sql::SQLException e) {
        return 0;
        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
    }
}

// КЛАСС НЕИСПРАВНОСТЬ
class DefectClass
{
public:

    // ДОБАВЛЕНИЕ НЕИСПРАВНОСТИ
    inline void Add(std::string name)
    {
        int count = counterData("select count(*) from defect where name = '" + name + "'");
        if (count == 0) {
            try {
                connectToSql();
                try
                {
                    pstmt = con->prepareStatement("INSERT INTO defect(name) VALUES (?)");
                    pstmt->setString(1, name);
                    pstmt->execute();
                    MessageBox::Show("Неисправность добавлена!", "Успех!");
                    delete con;
                    delete pstmt;
                }
                catch (sql::SQLException e)
                {
                    MessageBox::Show("Не удалось добавить неисправность! (проверьте входные данные)", "Ошибка!");
                }
            }
            catch (sql::SQLException e) {
                MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
            }
        }
        else { MessageBox::Show("Такая запись уже есть!", "Ошибка!"); }
    }

    // УДАЛЕНИЕ НЕИСПРАВНОСТИ
    inline void Delete(std::string name)
    {
        int count = counterData("select count(*) from defect where name = '" + name + "'");
        if (count != 0) {
            try {
                connectToSql();
                try
                {
                    stmt->execute("DELETE FROM defect WHERE name = '" + name + "'");
                    MessageBox::Show("Неисправность удалена!", "Успех!");
                    delete con;
                    delete stmt;
                }
                catch (sql::SQLException e)
                {
                    MessageBox::Show("Не удалось удалить неисправность! (проверьте входные данные)", "Ошибка!");
                }
            }
            catch (sql::SQLException e) {
                MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
            }
        }
        else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
    }
};

class FeatureClass
{
public:

    // ДОБАВЛЕНИЕ ПРИЗНАКА
    inline void Add(std::string name, std::string normal_state)
    {
        int count = counterData("select count(*) from feature where name = '" + name + "'");
        if (count == 0) {
            try {
                connectToSql();
                try
                {
                    pstmt = con->prepareStatement("INSERT INTO feature(name, normal_state) VALUES (?,?)");
                    pstmt->setString(1, name);
                    pstmt->setString(2, normal_state);
                    pstmt->execute();
                    MessageBox::Show("Признак добавлен!", "Успех!");
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

    // УДАЛЕНИЕ НЕИСПРАВНОСТИ
    inline void Delete(std::string name)
    {
        int count = counterData("select count(*) from feature where name = '" + name + "'");
        if (count != 0) {
            try {
                connectToSql();
                try
                {
                    stmt->execute("DELETE FROM feature WHERE name = '" + name + "'");
                    MessageBox::Show("Признак удален!", "Успех!");
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
};

class TypesFeatureClass
{
public:

    // ДОБАВЛЕНИЕ ЗНАЧЕНИЯ ПРИЗНАКА
    inline void Add(int id_feature, std::string name, std::string featureName)
    {
        int count = counterData("select count(*) from types_feature where name = '" + name + "' AND id_feature = (SELECT id FROM feature WHERE name = '" + featureName + "')");
        if (count == 0) {
            try {
                connectToSql();
                try
                {
                    pstmt = con->prepareStatement("INSERT INTO types_feature(id_feature, name) VALUES ((SELECT id FROM feature WHERE name = '" + featureName + "'),'" + name+ "')");
                    pstmt->execute();
                    MessageBox::Show("Значение признака добавлен!", "Успех!");
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

    // УДАЛЕНИЕ  ЗНАЧЕНИЯ ПРИЗНАКА
    inline void Delete(std::string featureName, std::string name)
    {
        int count = counterData("select count(*) from types_feature where id_feature = (SELECT id FROM feature WHERE name = '" + featureName + "')");
        if (count != 0) {
            try {
                connectToSql();
                try
                {
                    stmt->execute("DELETE FROM types_feature WHERE name = '" + name + "' AND id_feature = (SELECT id FROM feature WHERE name = '" + featureName + "')");
                    MessageBox::Show("Признак удален!", "Успех!");
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
};