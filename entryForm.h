#pragma once
#include "ClassObject.h"

namespace mitips {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для entryForm
	/// </summary>
	public ref class entryForm : public System::Windows::Forms::Form
	{
	public:
		entryForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~entryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBoxFIO;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox1;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxFIO = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->Location = System::Drawing::Point(123, 208);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &entryForm::button1_Click);
			// 
			// textBoxFIO
			// 
			this->textBoxFIO->Location = System::Drawing::Point(123, 114);
			this->textBoxFIO->Name = L"textBoxFIO";
			this->textBoxFIO->Size = System::Drawing::Size(177, 22);
			this->textBoxFIO->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(123, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите ФИО";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(123, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Выберите должность";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Пользователь", L"Эксперт" });
			this->listBox1->Location = System::Drawing::Point(123, 166);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(180, 36);
			this->listBox1->TabIndex = 5;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &entryForm::listBox1_SelectedIndexChanged);
			// 
			// entryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(502, 350);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxFIO);
			this->Controls->Add(this->button1);
			this->Name = L"entryForm";
			this->Text = L"entryForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
};
}
