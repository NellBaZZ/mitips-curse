#include "entryForm.h"
#include "expertForm.h"
#include <stdlib.h>

using namespace System;
using namespace System::Windows::Forms;

const std::string server = "localhost:5555";
const std::string username = "root";
const std::string password = "ebezap87@";

users_data usersData;


sql::Driver* driver;
sql::Connection* con;
sql::Statement* stmt;
sql::ResultSet* res;
sql::PreparedStatement* pstmt;

void main()
{
	system("chcp 65001");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//mitips::entryForm form;
    mitips::expertForm form;
	Application::Run(% form);
}

// Кнопка входа
System::Void mitips::entryForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string fio = converterFromStringFormToUtf8(textBoxFIO->Text->ToString());
    usersData.fio = "";
    if (1 == 1) { // classWorkerFormainform.checkWorker(login) && classWorkerFormainform.checkWorker(password)) {
        std::string sqll = "SELECT * FROM users where fio = '" + fio + "' AND post = '" + usersData.post + "'";
        try {
            connectToSql();
            try
            {
                res = stmt->executeQuery(sqll);
                while (res->next()) {
                     usersData.fio = res->getString("fio");
                    if (usersData.post == "Эксперт")
                    {
                        expertForm^ form = gcnew expertForm();
                        form->Show();
                        this->Hide();
                    }
                    else if (usersData.post == "Пользователь") {
                        ///
                        //
                        //
                    }
                }
                delete res;
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Не удалось войти в учетную запись! (проверьте входные данные)", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
        if (usersData.fio == "")
        {
            MessageBox::Show("Неправильный логин или пароль!", "Ошибка!");
        }
    }
}

// Обработка кнопки выбора из списка
System::Void mitips::entryForm::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    String^ selectedPost = listBox1->SelectedItem->ToString();
    std::string post = converterFromStringFormToUtf8(selectedPost);
    usersData.post = post;
}
