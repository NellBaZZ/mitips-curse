#pragma once
#include "entryForm.h"
namespace mitips {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для expertForm
	/// </summary>
	public ref class expertForm : public System::Windows::Forms::Form
	{
	public:
		expertForm(void)
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
		~expertForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ buttonTechDelete;
	private: System::Windows::Forms::Button^ buttonTechAdd;
	private: System::Windows::Forms::Button^ buttonTechUpdate;
	private: System::Windows::Forms::ListBox^ listBoxTechState;
	private: System::Windows::Forms::ListBox^ listBoxTechFeature;
	private: System::Windows::Forms::ListBox^ listBoxTechDefect;
	private: System::Windows::Forms::TabPage^ tabPage4;


	private: System::Windows::Forms::ListBox^ listBoxNormalStateSelect;
	private: System::Windows::Forms::ListBox^ listBoxNormalState;
	private: System::Windows::Forms::Button^ buttonNormalStateFeatureUpdate;
	private: System::Windows::Forms::ListBox^ listBoxNormalStateFeature;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ textBoxTypesFeatureAdd;
	private: System::Windows::Forms::Button^ buttonTypesFeatureUpdate;
	private: System::Windows::Forms::Button^ buttonTypesFeatureDelete;
	private: System::Windows::Forms::Button^ buttonTypesFeatureAdd;
	private: System::Windows::Forms::Button^ buttonFeatureForSelectUpdate;
	private: System::Windows::Forms::ListBox^ listBoxTypesFeature;
	private: System::Windows::Forms::ListBox^ listBoxFeatureForSelect;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBoxFeatureAdd;
	private: System::Windows::Forms::Button^ buttonFeatureDelete;
	private: System::Windows::Forms::Button^ buttonFeatureAdd;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBoxDefectAdd;
	private: System::Windows::Forms::Button^ buttonDefectDelete;
	private: System::Windows::Forms::Button^ buttonDefectAdd;
	private: System::Windows::Forms::Button^ buttonDefectUpdate;
	private: System::Windows::Forms::ListBox^ listBoxDefect;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::ListBox^ listBox;
	private: System::Windows::Forms::Label^ labelTechState;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::ListBox^ listBoxStateForFeature;
	private: System::Windows::Forms::ListBox^ listBoxSelectedFeature;
	private: System::Windows::Forms::ListBox^ listBoxAllFeatureRead;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::Button^ buttonCheck;
	private: System::Windows::Forms::Button^ buttonAllReadUpdate;
	private: System::Windows::Forms::Label^ labelState;
	private: System::Windows::Forms::Button^ buttonCheckDeleteFeature;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ buttonZnanijaUpdate;
	private: System::Windows::Forms::ListBox^ listBoxZnanija;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label25;










































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
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelTechState = (gcnew System::Windows::Forms::Label());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->buttonTechDelete = (gcnew System::Windows::Forms::Button());
			this->buttonTechAdd = (gcnew System::Windows::Forms::Button());
			this->buttonTechUpdate = (gcnew System::Windows::Forms::Button());
			this->listBoxTechState = (gcnew System::Windows::Forms::ListBox());
			this->listBoxTechFeature = (gcnew System::Windows::Forms::ListBox());
			this->listBoxTechDefect = (gcnew System::Windows::Forms::ListBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->listBoxNormalStateSelect = (gcnew System::Windows::Forms::ListBox());
			this->listBoxNormalState = (gcnew System::Windows::Forms::ListBox());
			this->buttonNormalStateFeatureUpdate = (gcnew System::Windows::Forms::Button());
			this->listBoxNormalStateFeature = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxTypesFeatureAdd = (gcnew System::Windows::Forms::TextBox());
			this->buttonTypesFeatureUpdate = (gcnew System::Windows::Forms::Button());
			this->buttonTypesFeatureDelete = (gcnew System::Windows::Forms::Button());
			this->buttonTypesFeatureAdd = (gcnew System::Windows::Forms::Button());
			this->buttonFeatureForSelectUpdate = (gcnew System::Windows::Forms::Button());
			this->listBoxTypesFeature = (gcnew System::Windows::Forms::ListBox());
			this->listBoxFeatureForSelect = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxFeatureAdd = (gcnew System::Windows::Forms::TextBox());
			this->buttonFeatureDelete = (gcnew System::Windows::Forms::Button());
			this->buttonFeatureAdd = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxDefectAdd = (gcnew System::Windows::Forms::TextBox());
			this->buttonDefectDelete = (gcnew System::Windows::Forms::Button());
			this->buttonDefectAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDefectUpdate = (gcnew System::Windows::Forms::Button());
			this->listBoxDefect = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->buttonCheckDeleteFeature = (gcnew System::Windows::Forms::Button());
			this->labelState = (gcnew System::Windows::Forms::Label());
			this->buttonAllReadUpdate = (gcnew System::Windows::Forms::Button());
			this->buttonCheck = (gcnew System::Windows::Forms::Button());
			this->listBoxStateForFeature = (gcnew System::Windows::Forms::ListBox());
			this->listBoxSelectedFeature = (gcnew System::Windows::Forms::ListBox());
			this->listBoxAllFeatureRead = (gcnew System::Windows::Forms::ListBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->buttonZnanijaUpdate = (gcnew System::Windows::Forms::Button());
			this->listBoxZnanija = (gcnew System::Windows::Forms::ListBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tabPage5->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tabPage5->Controls->Add(this->label20);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->label18);
			this->tabPage5->Controls->Add(this->label17);
			this->tabPage5->Controls->Add(this->label16);
			this->tabPage5->Controls->Add(this->label1);
			this->tabPage5->Controls->Add(this->labelTechState);
			this->tabPage5->Controls->Add(this->listBox);
			this->tabPage5->Controls->Add(this->buttonTechDelete);
			this->tabPage5->Controls->Add(this->buttonTechAdd);
			this->tabPage5->Controls->Add(this->buttonTechUpdate);
			this->tabPage5->Controls->Add(this->listBoxTechState);
			this->tabPage5->Controls->Add(this->listBoxTechFeature);
			this->tabPage5->Controls->Add(this->listBoxTechDefect);
			this->tabPage5->Location = System::Drawing::Point(4, 33);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(805, 466);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Техническая картина";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.2F));
			this->label20->Location = System::Drawing::Point(332, 168);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(410, 24);
			this->label20->TabIndex = 13;
			this->label20->Text = L" выберите его в этом списке и нажмите \"Добавить\"";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.2F));
			this->label19->Location = System::Drawing::Point(332, 144);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(328, 24);
			this->label19->TabIndex = 12;
			this->label19->Text = L"Чтобы добавить признак к неисправности";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(22, 307);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(351, 30);
			this->label18->TabIndex = 11;
			this->label18->Text = L"Список возможных значений признака";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(22, 163);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(171, 30);
			this->label17->TabIndex = 10;
			this->label17->Text = L"Список признаков";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(22, 15);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(226, 30);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Список неисправностей";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->label1->Location = System::Drawing::Point(303, 337);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 30);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Какой state выбран:";
			// 
			// labelTechState
			// 
			this->labelTechState->AutoSize = true;
			this->labelTechState->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->labelTechState->Location = System::Drawing::Point(303, 367);
			this->labelTechState->Name = L"labelTechState";
			this->labelTechState->Size = System::Drawing::Size(292, 30);
			this->labelTechState->TabIndex = 7;
			this->labelTechState->Text = L"тут написано какой state щас";
			// 
			// listBox
			// 
			this->listBox->BackColor = System::Drawing::Color::LightCyan;
			this->listBox->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBox->FormattingEnabled = true;
			this->listBox->ItemHeight = 30;
			this->listBox->Location = System::Drawing::Point(336, 196);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(270, 94);
			this->listBox->TabIndex = 6;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBox_SelectedIndexChanged);
			// 
			// buttonTechDelete
			// 
			this->buttonTechDelete->BackColor = System::Drawing::Color::Azure;
			this->buttonTechDelete->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonTechDelete->Location = System::Drawing::Point(625, 253);
			this->buttonTechDelete->Name = L"buttonTechDelete";
			this->buttonTechDelete->Size = System::Drawing::Size(147, 37);
			this->buttonTechDelete->TabIndex = 5;
			this->buttonTechDelete->Text = L"Удалить";
			this->buttonTechDelete->UseVisualStyleBackColor = false;
			this->buttonTechDelete->Click += gcnew System::EventHandler(this, &expertForm::buttonTechDelete_Click);
			// 
			// buttonTechAdd
			// 
			this->buttonTechAdd->BackColor = System::Drawing::Color::Azure;
			this->buttonTechAdd->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonTechAdd->Location = System::Drawing::Point(625, 196);
			this->buttonTechAdd->Name = L"buttonTechAdd";
			this->buttonTechAdd->Size = System::Drawing::Size(147, 37);
			this->buttonTechAdd->TabIndex = 4;
			this->buttonTechAdd->Text = L"Добавить";
			this->buttonTechAdd->UseVisualStyleBackColor = false;
			this->buttonTechAdd->Click += gcnew System::EventHandler(this, &expertForm::buttonTechAdd_Click);
			// 
			// buttonTechUpdate
			// 
			this->buttonTechUpdate->BackColor = System::Drawing::Color::Azure;
			this->buttonTechUpdate->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonTechUpdate->Location = System::Drawing::Point(321, 45);
			this->buttonTechUpdate->Name = L"buttonTechUpdate";
			this->buttonTechUpdate->Size = System::Drawing::Size(160, 37);
			this->buttonTechUpdate->TabIndex = 3;
			this->buttonTechUpdate->Text = L"Обновить";
			this->buttonTechUpdate->UseVisualStyleBackColor = false;
			this->buttonTechUpdate->Click += gcnew System::EventHandler(this, &expertForm::buttonTechUpdate_Click);
			// 
			// listBoxTechState
			// 
			this->listBoxTechState->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxTechState->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxTechState->FormattingEnabled = true;
			this->listBoxTechState->ItemHeight = 30;
			this->listBoxTechState->Location = System::Drawing::Point(27, 340);
			this->listBoxTechState->Name = L"listBoxTechState";
			this->listBoxTechState->Size = System::Drawing::Size(270, 94);
			this->listBoxTechState->TabIndex = 2;
			this->listBoxTechState->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBoxTechState_SelectedIndexChanged);
			// 
			// listBoxTechFeature
			// 
			this->listBoxTechFeature->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxTechFeature->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxTechFeature->FormattingEnabled = true;
			this->listBoxTechFeature->ItemHeight = 30;
			this->listBoxTechFeature->Location = System::Drawing::Point(27, 196);
			this->listBoxTechFeature->Name = L"listBoxTechFeature";
			this->listBoxTechFeature->Size = System::Drawing::Size(270, 94);
			this->listBoxTechFeature->TabIndex = 1;
			this->listBoxTechFeature->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBoxTechFeature_SelectedIndexChanged);
			// 
			// listBoxTechDefect
			// 
			this->listBoxTechDefect->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxTechDefect->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxTechDefect->FormattingEnabled = true;
			this->listBoxTechDefect->ItemHeight = 30;
			this->listBoxTechDefect->Location = System::Drawing::Point(27, 45);
			this->listBoxTechDefect->Name = L"listBoxTechDefect";
			this->listBoxTechDefect->Size = System::Drawing::Size(270, 94);
			this->listBoxTechDefect->TabIndex = 0;
			this->listBoxTechDefect->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBoxTechDefect_SelectedIndexChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->listBoxNormalStateSelect);
			this->tabPage4->Controls->Add(this->listBoxNormalState);
			this->tabPage4->Controls->Add(this->buttonNormalStateFeatureUpdate);
			this->tabPage4->Controls->Add(this->listBoxNormalStateFeature);
			this->tabPage4->Location = System::Drawing::Point(4, 33);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(805, 466);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Нормальные знач. признаков";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(314, 193);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(352, 30);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Выберите новое нормальное значение";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(314, 15);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(301, 30);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Выбранное нормальное значение";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(22, 15);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(171, 30);
			this->label13->TabIndex = 9;
			this->label13->Text = L"Список признаков";
			// 
			// listBoxNormalStateSelect
			// 
			this->listBoxNormalStateSelect->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxNormalStateSelect->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxNormalStateSelect->FormattingEnabled = true;
			this->listBoxNormalStateSelect->ItemHeight = 30;
			this->listBoxNormalStateSelect->Location = System::Drawing::Point(319, 226);
			this->listBoxNormalStateSelect->Name = L"listBoxNormalStateSelect";
			this->listBoxNormalStateSelect->Size = System::Drawing::Size(270, 124);
			this->listBoxNormalStateSelect->TabIndex = 6;
			this->listBoxNormalStateSelect->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBoxNormalStateSelect_SelectedIndexChanged);
			// 
			// listBoxNormalState
			// 
			this->listBoxNormalState->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxNormalState->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxNormalState->FormattingEnabled = true;
			this->listBoxNormalState->ItemHeight = 30;
			this->listBoxNormalState->Location = System::Drawing::Point(319, 48);
			this->listBoxNormalState->Name = L"listBoxNormalState";
			this->listBoxNormalState->Size = System::Drawing::Size(270, 124);
			this->listBoxNormalState->TabIndex = 5;
			// 
			// buttonNormalStateFeatureUpdate
			// 
			this->buttonNormalStateFeatureUpdate->BackColor = System::Drawing::Color::Azure;
			this->buttonNormalStateFeatureUpdate->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonNormalStateFeatureUpdate->Location = System::Drawing::Point(27, 178);
			this->buttonNormalStateFeatureUpdate->Name = L"buttonNormalStateFeatureUpdate";
			this->buttonNormalStateFeatureUpdate->Size = System::Drawing::Size(160, 37);
			this->buttonNormalStateFeatureUpdate->TabIndex = 4;
			this->buttonNormalStateFeatureUpdate->Text = L"Обновить";
			this->buttonNormalStateFeatureUpdate->UseVisualStyleBackColor = false;
			this->buttonNormalStateFeatureUpdate->Click += gcnew System::EventHandler(this, &expertForm::buttonNormalStateFeatureUpdate_Click);
			// 
			// listBoxNormalStateFeature
			// 
			this->listBoxNormalStateFeature->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxNormalStateFeature->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxNormalStateFeature->FormattingEnabled = true;
			this->listBoxNormalStateFeature->ItemHeight = 30;
			this->listBoxNormalStateFeature->Location = System::Drawing::Point(27, 48);
			this->listBoxNormalStateFeature->Name = L"listBoxNormalStateFeature";
			this->listBoxNormalStateFeature->Size = System::Drawing::Size(270, 124);
			this->listBoxNormalStateFeature->TabIndex = 3;
			this->listBoxNormalStateFeature->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBoxNormalStateFeature_SelectedIndexChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->textBoxTypesFeatureAdd);
			this->tabPage3->Controls->Add(this->buttonTypesFeatureUpdate);
			this->tabPage3->Controls->Add(this->buttonTypesFeatureDelete);
			this->tabPage3->Controls->Add(this->buttonTypesFeatureAdd);
			this->tabPage3->Controls->Add(this->buttonFeatureForSelectUpdate);
			this->tabPage3->Controls->Add(this->listBoxTypesFeature);
			this->tabPage3->Controls->Add(this->listBoxFeatureForSelect);
			this->tabPage3->Location = System::Drawing::Point(4, 33);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(805, 466);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Возможные знач. признаков";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(341, 253);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(389, 30);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Для удаления выберите значение в списке";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(341, 123);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(311, 30);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Для добавления введите значение";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(341, 15);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(325, 30);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Список возможных знач. признаков";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(22, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(171, 30);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Список признаков";
			// 
			// textBoxTypesFeatureAdd
			// 
			this->textBoxTypesFeatureAdd->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->textBoxTypesFeatureAdd->Location = System::Drawing::Point(346, 156);
			this->textBoxTypesFeatureAdd->Name = L"textBoxTypesFeatureAdd";
			this->textBoxTypesFeatureAdd->Size = System::Drawing::Size(282, 38);
			this->textBoxTypesFeatureAdd->TabIndex = 6;
			// 
			// buttonTypesFeatureUpdate
			// 
			this->buttonTypesFeatureUpdate->Location = System::Drawing::Point(820, 389);
			this->buttonTypesFeatureUpdate->Name = L"buttonTypesFeatureUpdate";
			this->buttonTypesFeatureUpdate->Size = System::Drawing::Size(75, 23);
			this->buttonTypesFeatureUpdate->TabIndex = 5;
			this->buttonTypesFeatureUpdate->Text = L"Обновить";
			this->buttonTypesFeatureUpdate->UseVisualStyleBackColor = true;
			// 
			// buttonTypesFeatureDelete
			// 
			this->buttonTypesFeatureDelete->BackColor = System::Drawing::Color::Azure;
			this->buttonTypesFeatureDelete->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonTypesFeatureDelete->Location = System::Drawing::Point(346, 286);
			this->buttonTypesFeatureDelete->Name = L"buttonTypesFeatureDelete";
			this->buttonTypesFeatureDelete->Size = System::Drawing::Size(282, 37);
			this->buttonTypesFeatureDelete->TabIndex = 4;
			this->buttonTypesFeatureDelete->Text = L"Удалить";
			this->buttonTypesFeatureDelete->UseVisualStyleBackColor = false;
			this->buttonTypesFeatureDelete->Click += gcnew System::EventHandler(this, &expertForm::buttonTypesFeatureDelete_Click);
			// 
			// buttonTypesFeatureAdd
			// 
			this->buttonTypesFeatureAdd->BackColor = System::Drawing::Color::Azure;
			this->buttonTypesFeatureAdd->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonTypesFeatureAdd->Location = System::Drawing::Point(346, 200);
			this->buttonTypesFeatureAdd->Name = L"buttonTypesFeatureAdd";
			this->buttonTypesFeatureAdd->Size = System::Drawing::Size(282, 37);
			this->buttonTypesFeatureAdd->TabIndex = 3;
			this->buttonTypesFeatureAdd->Text = L"Добавить";
			this->buttonTypesFeatureAdd->UseVisualStyleBackColor = false;
			this->buttonTypesFeatureAdd->Click += gcnew System::EventHandler(this, &expertForm::buttonTypesFeatureAdd_Click);
			// 
			// buttonFeatureForSelectUpdate
			// 
			this->buttonFeatureForSelectUpdate->BackColor = System::Drawing::Color::Azure;
			this->buttonFeatureForSelectUpdate->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonFeatureForSelectUpdate->Location = System::Drawing::Point(27, 178);
			this->buttonFeatureForSelectUpdate->Name = L"buttonFeatureForSelectUpdate";
			this->buttonFeatureForSelectUpdate->Size = System::Drawing::Size(160, 37);
			this->buttonFeatureForSelectUpdate->TabIndex = 2;
			this->buttonFeatureForSelectUpdate->Text = L"Обновить";
			this->buttonFeatureForSelectUpdate->UseVisualStyleBackColor = false;
			this->buttonFeatureForSelectUpdate->Click += gcnew System::EventHandler(this, &expertForm::buttonFeatureForSelectUpdate_Click);
			// 
			// listBoxTypesFeature
			// 
			this->listBoxTypesFeature->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxTypesFeature->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxTypesFeature->FormattingEnabled = true;
			this->listBoxTypesFeature->ItemHeight = 30;
			this->listBoxTypesFeature->Location = System::Drawing::Point(346, 48);
			this->listBoxTypesFeature->Name = L"listBoxTypesFeature";
			this->listBoxTypesFeature->Size = System::Drawing::Size(282, 64);
			this->listBoxTypesFeature->TabIndex = 1;
			this->listBoxTypesFeature->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBoxTypesFeature_SelectedIndexChanged);
			// 
			// listBoxFeatureForSelect
			// 
			this->listBoxFeatureForSelect->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxFeatureForSelect->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxFeatureForSelect->FormattingEnabled = true;
			this->listBoxFeatureForSelect->ItemHeight = 30;
			this->listBoxFeatureForSelect->Location = System::Drawing::Point(27, 48);
			this->listBoxFeatureForSelect->Name = L"listBoxFeatureForSelect";
			this->listBoxFeatureForSelect->Size = System::Drawing::Size(270, 124);
			this->listBoxFeatureForSelect->TabIndex = 0;
			this->listBoxFeatureForSelect->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBoxFeatureForSelect_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->textBoxFeatureAdd);
			this->tabPage2->Controls->Add(this->buttonFeatureDelete);
			this->tabPage2->Controls->Add(this->buttonFeatureAdd);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 33);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(805, 466);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Признаки";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(347, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(384, 30);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Для удаления выберите признак в списке";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(347, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(306, 30);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Для добавления введите признак";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(22, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(171, 30);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Список признаков";
			// 
			// textBoxFeatureAdd
			// 
			this->textBoxFeatureAdd->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->textBoxFeatureAdd->Location = System::Drawing::Point(352, 50);
			this->textBoxFeatureAdd->Name = L"textBoxFeatureAdd";
			this->textBoxFeatureAdd->Size = System::Drawing::Size(282, 38);
			this->textBoxFeatureAdd->TabIndex = 4;
			// 
			// buttonFeatureDelete
			// 
			this->buttonFeatureDelete->BackColor = System::Drawing::Color::Azure;
			this->buttonFeatureDelete->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonFeatureDelete->Location = System::Drawing::Point(352, 186);
			this->buttonFeatureDelete->Name = L"buttonFeatureDelete";
			this->buttonFeatureDelete->Size = System::Drawing::Size(282, 37);
			this->buttonFeatureDelete->TabIndex = 3;
			this->buttonFeatureDelete->Text = L"Удалить";
			this->buttonFeatureDelete->UseVisualStyleBackColor = false;
			this->buttonFeatureDelete->Click += gcnew System::EventHandler(this, &expertForm::buttonFeatureDelete_Click);
			// 
			// buttonFeatureAdd
			// 
			this->buttonFeatureAdd->BackColor = System::Drawing::Color::Azure;
			this->buttonFeatureAdd->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonFeatureAdd->Location = System::Drawing::Point(352, 105);
			this->buttonFeatureAdd->Name = L"buttonFeatureAdd";
			this->buttonFeatureAdd->Size = System::Drawing::Size(282, 37);
			this->buttonFeatureAdd->TabIndex = 2;
			this->buttonFeatureAdd->Text = L"Добавить";
			this->buttonFeatureAdd->UseVisualStyleBackColor = false;
			this->buttonFeatureAdd->Click += gcnew System::EventHandler(this, &expertForm::buttonFeatureAdd_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Azure;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->button1->Location = System::Drawing::Point(27, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &expertForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::LightCyan;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 30;
			this->listBox1->Location = System::Drawing::Point(27, 48);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(270, 124);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBox1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBoxDefectAdd);
			this->tabPage1->Controls->Add(this->buttonDefectDelete);
			this->tabPage1->Controls->Add(this->buttonDefectAdd);
			this->tabPage1->Controls->Add(this->buttonDefectUpdate);
			this->tabPage1->Controls->Add(this->listBoxDefect);
			this->tabPage1->Location = System::Drawing::Point(4, 33);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(805, 466);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Неисправности";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(320, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(384, 30);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Для удаления выберите признак в списке";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(320, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(306, 30);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Для добавления введите признак";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(303, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 24);
			this->label3->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 30);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Список неисправностей";
			// 
			// textBoxDefectAdd
			// 
			this->textBoxDefectAdd->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->textBoxDefectAdd->Location = System::Drawing::Point(325, 48);
			this->textBoxDefectAdd->Name = L"textBoxDefectAdd";
			this->textBoxDefectAdd->Size = System::Drawing::Size(282, 38);
			this->textBoxDefectAdd->TabIndex = 5;
			// 
			// buttonDefectDelete
			// 
			this->buttonDefectDelete->BackColor = System::Drawing::Color::Azure;
			this->buttonDefectDelete->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonDefectDelete->Location = System::Drawing::Point(325, 185);
			this->buttonDefectDelete->Name = L"buttonDefectDelete";
			this->buttonDefectDelete->Size = System::Drawing::Size(282, 37);
			this->buttonDefectDelete->TabIndex = 4;
			this->buttonDefectDelete->Text = L"Удалить";
			this->buttonDefectDelete->UseVisualStyleBackColor = false;
			this->buttonDefectDelete->Click += gcnew System::EventHandler(this, &expertForm::buttonDefectDelete_Click);
			// 
			// buttonDefectAdd
			// 
			this->buttonDefectAdd->BackColor = System::Drawing::Color::Azure;
			this->buttonDefectAdd->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonDefectAdd->Location = System::Drawing::Point(325, 92);
			this->buttonDefectAdd->Name = L"buttonDefectAdd";
			this->buttonDefectAdd->Size = System::Drawing::Size(282, 37);
			this->buttonDefectAdd->TabIndex = 3;
			this->buttonDefectAdd->Text = L"Добавить";
			this->buttonDefectAdd->UseVisualStyleBackColor = false;
			this->buttonDefectAdd->Click += gcnew System::EventHandler(this, &expertForm::buttonDefectAdd_Click);
			// 
			// buttonDefectUpdate
			// 
			this->buttonDefectUpdate->BackColor = System::Drawing::Color::Azure;
			this->buttonDefectUpdate->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonDefectUpdate->Location = System::Drawing::Point(27, 178);
			this->buttonDefectUpdate->Name = L"buttonDefectUpdate";
			this->buttonDefectUpdate->Size = System::Drawing::Size(160, 37);
			this->buttonDefectUpdate->TabIndex = 2;
			this->buttonDefectUpdate->Text = L"Обновить";
			this->buttonDefectUpdate->UseVisualStyleBackColor = false;
			this->buttonDefectUpdate->Click += gcnew System::EventHandler(this, &expertForm::buttonDefectUpdate_Click);
			// 
			// listBoxDefect
			// 
			this->listBoxDefect->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxDefect->Enabled = false;
			this->listBoxDefect->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxDefect->FormattingEnabled = true;
			this->listBoxDefect->ItemHeight = 30;
			this->listBoxDefect->Location = System::Drawing::Point(27, 48);
			this->listBoxDefect->Name = L"listBoxDefect";
			this->listBoxDefect->Size = System::Drawing::Size(270, 124);
			this->listBoxDefect->TabIndex = 0;
			this->listBoxDefect->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBoxDefect_SelectedIndexChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.2F));
			this->tabControl1->Location = System::Drawing::Point(12, 34);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(813, 503);
			this->tabControl1->TabIndex = 1;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.2F));
			this->tabControl2->Location = System::Drawing::Point(866, 34);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(470, 507);
			this->tabControl2->TabIndex = 2;
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->tabPage6->Controls->Add(this->label24);
			this->tabPage6->Controls->Add(this->label23);
			this->tabPage6->Controls->Add(this->label22);
			this->tabPage6->Controls->Add(this->label21);
			this->tabPage6->Controls->Add(this->buttonCheckDeleteFeature);
			this->tabPage6->Controls->Add(this->labelState);
			this->tabPage6->Controls->Add(this->buttonAllReadUpdate);
			this->tabPage6->Controls->Add(this->buttonCheck);
			this->tabPage6->Controls->Add(this->listBoxStateForFeature);
			this->tabPage6->Controls->Add(this->listBoxSelectedFeature);
			this->tabPage6->Controls->Add(this->listBoxAllFeatureRead);
			this->tabPage6->Location = System::Drawing::Point(4, 33);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(396, 470);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"Ввод исходных данных";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.2F));
			this->label24->Location = System::Drawing::Point(196, 217);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(74, 24);
			this->label24->TabIndex = 13;
			this->label24->Text = L"Значения";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.2F));
			this->label23->Location = System::Drawing::Point(12, 216);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(79, 24);
			this->label23->TabIndex = 12;
			this->label23->Text = L"Признаки";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.2F));
			this->label22->Location = System::Drawing::Point(187, 163);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(154, 24);
			this->label22->TabIndex = 11;
			this->label22->Text = L"Выбранное значение";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(11, 11);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(316, 30);
			this->label21->TabIndex = 10;
			this->label21->Text = L"Выберите признаки и их значения";
			// 
			// buttonCheckDeleteFeature
			// 
			this->buttonCheckDeleteFeature->BackColor = System::Drawing::Color::Azure;
			this->buttonCheckDeleteFeature->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonCheckDeleteFeature->Location = System::Drawing::Point(16, 183);
			this->buttonCheckDeleteFeature->Name = L"buttonCheckDeleteFeature";
			this->buttonCheckDeleteFeature->Size = System::Drawing::Size(163, 29);
			this->buttonCheckDeleteFeature->TabIndex = 6;
			this->buttonCheckDeleteFeature->Text = L"^^^^";
			this->buttonCheckDeleteFeature->UseVisualStyleBackColor = false;
			this->buttonCheckDeleteFeature->Click += gcnew System::EventHandler(this, &expertForm::buttonCheckDeleteFeature_Click);
			// 
			// labelState
			// 
			this->labelState->AutoSize = true;
			this->labelState->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->labelState->Location = System::Drawing::Point(186, 187);
			this->labelState->Name = L"labelState";
			this->labelState->Size = System::Drawing::Size(64, 30);
			this->labelState->TabIndex = 5;
			this->labelState->Text = L"label2";
			// 
			// buttonAllReadUpdate
			// 
			this->buttonAllReadUpdate->BackColor = System::Drawing::Color::Azure;
			this->buttonAllReadUpdate->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonAllReadUpdate->Location = System::Drawing::Point(188, 45);
			this->buttonAllReadUpdate->Name = L"buttonAllReadUpdate";
			this->buttonAllReadUpdate->Size = System::Drawing::Size(160, 37);
			this->buttonAllReadUpdate->TabIndex = 4;
			this->buttonAllReadUpdate->Text = L"Обновить";
			this->buttonAllReadUpdate->UseVisualStyleBackColor = false;
			this->buttonAllReadUpdate->Click += gcnew System::EventHandler(this, &expertForm::buttonAllReadUpdate_Click);
			// 
			// buttonCheck
			// 
			this->buttonCheck->BackColor = System::Drawing::Color::Azure;
			this->buttonCheck->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonCheck->Location = System::Drawing::Point(16, 380);
			this->buttonCheck->Name = L"buttonCheck";
			this->buttonCheck->Size = System::Drawing::Size(302, 72);
			this->buttonCheck->TabIndex = 3;
			this->buttonCheck->Text = L"Определить состояние сети";
			this->buttonCheck->UseVisualStyleBackColor = false;
			this->buttonCheck->Click += gcnew System::EventHandler(this, &expertForm::buttonCheck_Click);
			// 
			// listBoxStateForFeature
			// 
			this->listBoxStateForFeature->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxStateForFeature->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxStateForFeature->FormattingEnabled = true;
			this->listBoxStateForFeature->ItemHeight = 30;
			this->listBoxStateForFeature->Location = System::Drawing::Point(200, 243);
			this->listBoxStateForFeature->Name = L"listBoxStateForFeature";
			this->listBoxStateForFeature->Size = System::Drawing::Size(127, 64);
			this->listBoxStateForFeature->TabIndex = 2;
			this->listBoxStateForFeature->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBoxStateForFeature_SelectedIndexChanged);
			// 
			// listBoxSelectedFeature
			// 
			this->listBoxSelectedFeature->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxSelectedFeature->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxSelectedFeature->FormattingEnabled = true;
			this->listBoxSelectedFeature->ItemHeight = 30;
			this->listBoxSelectedFeature->Location = System::Drawing::Point(16, 243);
			this->listBoxSelectedFeature->Name = L"listBoxSelectedFeature";
			this->listBoxSelectedFeature->Size = System::Drawing::Size(175, 124);
			this->listBoxSelectedFeature->TabIndex = 1;
			this->listBoxSelectedFeature->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBoxSelectedFeature_SelectedIndexChanged);
			// 
			// listBoxAllFeatureRead
			// 
			this->listBoxAllFeatureRead->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxAllFeatureRead->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->listBoxAllFeatureRead->FormattingEnabled = true;
			this->listBoxAllFeatureRead->ItemHeight = 30;
			this->listBoxAllFeatureRead->Location = System::Drawing::Point(16, 44);
			this->listBoxAllFeatureRead->Name = L"listBoxAllFeatureRead";
			this->listBoxAllFeatureRead->Size = System::Drawing::Size(163, 124);
			this->listBoxAllFeatureRead->TabIndex = 0;
			this->listBoxAllFeatureRead->SelectedIndexChanged += gcnew System::EventHandler(this, &expertForm::listBoxAllFeatureRead_SelectedIndexChanged);
			// 
			// tabPage8
			// 
			this->tabPage8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->tabPage8->Controls->Add(this->buttonZnanijaUpdate);
			this->tabPage8->Controls->Add(this->listBoxZnanija);
			this->tabPage8->Location = System::Drawing::Point(4, 33);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(462, 470);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Просмотр базы знаний";
			// 
			// buttonZnanijaUpdate
			// 
			this->buttonZnanijaUpdate->BackColor = System::Drawing::Color::Azure;
			this->buttonZnanijaUpdate->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F));
			this->buttonZnanijaUpdate->Location = System::Drawing::Point(6, 345);
			this->buttonZnanijaUpdate->Name = L"buttonZnanijaUpdate";
			this->buttonZnanijaUpdate->Size = System::Drawing::Size(436, 52);
			this->buttonZnanijaUpdate->TabIndex = 1;
			this->buttonZnanijaUpdate->Text = L"Обновить";
			this->buttonZnanijaUpdate->UseVisualStyleBackColor = false;
			this->buttonZnanijaUpdate->Click += gcnew System::EventHandler(this, &expertForm::buttonZnanijaUpdate_Click);
			// 
			// listBoxZnanija
			// 
			this->listBoxZnanija->BackColor = System::Drawing::Color::LightCyan;
			this->listBoxZnanija->FormattingEnabled = true;
			this->listBoxZnanija->ItemHeight = 24;
			this->listBoxZnanija->Location = System::Drawing::Point(6, 23);
			this->listBoxZnanija->Name = L"listBoxZnanija";
			this->listBoxZnanija->Size = System::Drawing::Size(436, 316);
			this->listBoxZnanija->TabIndex = 0;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.2F));
			this->label25->Location = System::Drawing::Point(10, -5);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(261, 36);
			this->label25->TabIndex = 10;
			this->label25->Text = L"Редактор базы знаний";
			// 
			// expertForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1367, 593);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->tabControl2);
			this->Controls->Add(this->tabControl1);
			this->Name = L"expertForm";
			this->Text = L"expertForm";
			this->Shown += gcnew System::EventHandler(this, &expertForm::expertForm_Shown);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void expertForm_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDefectUpdate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBoxDefect_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDefectAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDefectDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFeatureAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFeatureDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFeatureForSelectUpdate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTypesFeatureAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTypesFeatureDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBoxFeatureForSelect_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBoxTypesFeature_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonNormalStateFeatureUpdate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBoxNormalStateFeature_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBoxNormalStateSelect_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTechUpdate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBoxTechDefect_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBoxTechFeature_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBoxTechState_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTechAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTechDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBoxAllFeatureRead_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAllReadUpdate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBoxSelectedFeature_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCheckDeleteFeature_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBoxStateForFeature_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCheck_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonZnanijaUpdate_Click(System::Object^ sender, System::EventArgs^ e);
};
}
