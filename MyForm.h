#pragma once
#include <msclr\marshal_cppstd.h>
#include <array>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include "Gubr.h"
#include <cMath>
#using <system.dll>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
//#include <Microsoft.Data.SqlClient>


//#using Attachmate.Reflection.Framework;
//#using Attachmate.Reflection.Emulation.IbmHosts;

using namespace std;

namespace Gubr2 {

	//using namespace System;
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Data::Odbc;
	using namespace System::Data::SqlClient;
	using namespace System::Runtime::InteropServices;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;




	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;

	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label14;




	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button5;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel1->Location = System::Drawing::Point(307, 32);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(0, 0);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->BackColor = System::Drawing::Color::Honeydew;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Location = System::Drawing::Point(7, 65);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->listBox1->Size = System::Drawing::Size(839, 365);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(3, 43);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(65, 19);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"InputFile";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(9, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"In House";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(9, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Consolidated";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(9, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"7078";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Location = System::Drawing::Point(9, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 23);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Imports";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->textBox1->Location = System::Drawing::Point(148, 97);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(40, 27);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"6";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->textBox2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->textBox2->Location = System::Drawing::Point(148, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(40, 27);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"10";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->textBox3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->textBox3->Location = System::Drawing::Point(148, 163);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(40, 27);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"20";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->textBox4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->textBox4->Location = System::Drawing::Point(148, 196);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(40, 27);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"30";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->richTextBox1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->linkLabel2);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(310, 451);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1129, 340);
			this->panel2->TabIndex = 13;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label20->Location = System::Drawing::Point(588, 10);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(78, 23);
			this->label20->TabIndex = 20;
			this->label20->Text = L"selected";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label19->Location = System::Drawing::Point(518, 10);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(16, 23);
			this->label19->TabIndex = 19;
			this->label19->Text = L"-";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label18->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label18->Location = System::Drawing::Point(410, 10);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(64, 23);
			this->label18->TabIndex = 18;
			this->label18->Text = L"loaded";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold));
			this->label17->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label17->Location = System::Drawing::Point(340, 10);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(16, 23);
			this->label17->TabIndex = 17;
			this->label17->Text = L"-";
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::Color::Honeydew;
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->richTextBox1->Location = System::Drawing::Point(7, 48);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1116, 288);
			this->richTextBox1->TabIndex = 16;
			this->richTextBox1->Text = L"";
			this->richTextBox1->WordWrap = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightBlue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button4->Location = System::Drawing::Point(905, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(215, 39);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Save Gubr Script";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->Location = System::Drawing::Point(3, 13);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(216, 19);
			this->linkLabel2->TabIndex = 2;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"ScriptInputGUBR - Void Keyer.txt";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Location = System::Drawing::Point(684, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 39);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Preview Script";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->listBox4);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(3, 252);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(304, 539);
			this->panel3->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Location = System::Drawing::Point(127, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 26);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Log";
			// 
			// listBox4
			// 
			this->listBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listBox4->BackColor = System::Drawing::Color::Honeydew;
			this->listBox4->ColumnWidth = 15;
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 19;
			this->listBox4->Location = System::Drawing::Point(3, 36);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(298, 498);
			this->listBox4->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->AllowDrop = true;
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel4->Controls->Add(this->radioButton3);
			this->panel4->Controls->Add(this->radioButton2);
			this->panel4->Controls->Add(this->radioButton1);
			this->panel4->Controls->Add(this->progressBar1);
			this->panel4->Controls->Add(this->button11);
			this->panel4->Controls->Add(this->linkLabel3);
			this->panel4->Controls->Add(this->button12);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->richTextBox2);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->textBox12);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->textBox11);
			this->panel4->Controls->Add(this->textBox10);
			this->panel4->Controls->Add(this->textBox9);
			this->panel4->Controls->Add(this->textBox8);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->listBox1);
			this->panel4->Controls->Add(this->linkLabel1);
			this->panel4->ImeMode = System::Windows::Forms::ImeMode::On;
			this->panel4->Location = System::Drawing::Point(310, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1129, 433);
			this->panel4->TabIndex = 17;
			// 
			// radioButton3
			// 
			this->radioButton3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(1017, 11);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(55, 23);
			this->radioButton3->TabIndex = 29;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"DC\'s";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(941, 11);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(70, 23);
			this->radioButton2->TabIndex = 28;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Stores";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(872, 10);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(64, 23);
			this->radioButton1->TabIndex = 27;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Items";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(565, 10);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(281, 23);
			this->progressBar1->TabIndex = 26;
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button11->BackColor = System::Drawing::Color::LightBlue;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->button11->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button11->Location = System::Drawing::Point(1045, 65);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 27);
			this->button11->TabIndex = 25;
			this->button11->Text = L"Clear";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// linkLabel3
			// 
			this->linkLabel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel3->Location = System::Drawing::Point(854, 101);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(82, 19);
			this->linkLabel3->TabIndex = 24;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"ItemList.txt";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel3_LinkClicked);
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button12->BackColor = System::Drawing::Color::LightBlue;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->button12->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button12->Location = System::Drawing::Point(966, 65);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(73, 27);
			this->button12->TabIndex = 23;
			this->button12->Text = L"Reload";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::LightBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button3->Location = System::Drawing::Point(852, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 27);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Remove Items";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox2->BackColor = System::Drawing::Color::Honeydew;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->richTextBox2->Location = System::Drawing::Point(858, 123);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(262, 307);
			this->richTextBox2->TabIndex = 20;
			this->richTextBox2->Text = L"";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightBlue;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Wingdings 3", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button8->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button8->Location = System::Drawing::Point(507, 7);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(18, 27);
			this->button8->TabIndex = 18;
			this->button8->Text = L"p";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightBlue;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Wingdings 3", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button7->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button7->Location = System::Drawing::Point(531, 7);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(17, 27);
			this->button7->TabIndex = 17;
			this->button7->Text = L"q";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(473, 7);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(28, 27);
			this->textBox12->TabIndex = 9;
			this->textBox12->Text = L"0";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(413, 10);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 19);
			this->label15->TabIndex = 8;
			this->label15->Text = L"Offset:";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(353, 7);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(54, 27);
			this->textBox11->TabIndex = 7;
			this->textBox11->Text = L"Carton";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(299, 7);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(48, 27);
			this->textBox10->TabIndex = 6;
			this->textBox10->Text = L"DC";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(207, 7);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(48, 27);
			this->textBox9->TabIndex = 5;
			this->textBox9->Text = L"Store";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(261, 7);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(32, 27);
			this->textBox8->TabIndex = 4;
			this->textBox8->Text = L"Div";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(119, 7);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(82, 27);
			this->textBox7->TabIndex = 3;
			this->textBox7->Text = L"Item";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(3, 10);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 19);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Spacing Check:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(240, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 19);
			this->label7->TabIndex = 18;
			this->label7->Text = L"6092";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(240, 123);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 19);
			this->label8->TabIndex = 19;
			this->label8->Text = L"6022";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(240, 147);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 19);
			this->label9->TabIndex = 20;
			this->label9->Text = L"6938";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(240, 170);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 19);
			this->label10->TabIndex = 21;
			this->label10->Text = L"6561";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(240, 195);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 19);
			this->label11->TabIndex = 22;
			this->label11->Text = L"7078";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(219, 104);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 23;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(219, 127);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 24;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(219, 151);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 25;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(219, 174);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 26;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Location = System::Drawing::Point(219, 196);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 27;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->listBox2);
			this->panel1->Controls->Add(this->listBox5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->checkBox5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->checkBox4);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(3, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(304, 234);
			this->panel1->TabIndex = 3;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightBlue;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button5->Location = System::Drawing::Point(150, 10);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(141, 39);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Database";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(228, 52);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 17);
			this->label13->TabIndex = 30;
			this->label13->Text = L"File Size";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold));
			this->label12->Location = System::Drawing::Point(3, 52);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 17);
			this->label12->TabIndex = 29;
			this->label12->Text = L"File Name";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(3, 69);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(222, 19);
			this->listBox2->TabIndex = 1;
			// 
			// listBox5
			// 
			this->listBox5->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 15;
			this->listBox5->Location = System::Drawing::Point(227, 69);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(74, 19);
			this->listBox5->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Location = System::Drawing::Point(3, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load File";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MintCream;
			this->ClientSize = System::Drawing::Size(1442, 799);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel3);
			this->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->Name = L"MyForm";
			this->Text = L"Gubr";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Load Form
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = L"6";
	textBox2->Text = L"10";
	textBox3->Text = L"20";
	textBox4->Text = L"30";

	checkBox1->Checked = true;
	checkBox2->Checked = true;
	checkBox3->Checked = true;
	checkBox4->Checked = true;
	checkBox5->Checked = true;

	int inHouse = System::Int32::Parse(textBox1->Text);
	int conSolidated = Int32::Parse(textBox2->Text);
	int sevenEight = Int32::Parse(textBox3->Text);
	int otherImports = Int32::Parse(textBox4->Text);
	DateTime now = DateTime::Now;
	DateTime inHouseDate = now.AddDays(-inHouse);
	DateTime conSolidatedDate = now.AddDays(-conSolidated);
	DateTime sevenEightDate = now.AddDays(-sevenEight);
	DateTime otherImportDate = now.AddDays(-otherImports);

	listBox4->Items->Add("6092 - " + inHouseDate.ToString("MM/dd/yyyy"));
	listBox4->Items->Add("6022 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	listBox4->Items->Add("6938 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	listBox4->Items->Add("6561 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	listBox4->Items->Add("7078 - " + sevenEightDate.ToString("MM/dd/yyyy"));
	listBox4->Items->Add("Others - " + otherImportDate.ToString("MM/dd/yyyy"));

	StreamReader^ reader = gcnew StreamReader("ItemList.txt");
	String^ fileContents = reader->ReadToEnd();
	reader->Close();
	richTextBox2->Text = fileContents;
	radioButton1->Checked = true;
}
	   //open file button
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int offSet = Int32::Parse(textBox12->Text);
	string lineForC;
	NewLoad();

	String^ filePath;
	string filePathStr;

	// Create an instance of the OpenFileDialog
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

	// Set properties of the OpenFileDialog
	openFileDialog1->Title = "Open File";  // Dialog title
	//openFileDialog1->InitialDirectory = "R:\\";  // Initial directory to open
	openFileDialog1->FileName = "0271key*";

	// Show the OpenFileDialog and handle the result
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Get the selected file path
		filePath = openFileDialog1->FileName;

		// Convert System::String^ to std::string for easier usage (optional)
		filePathStr = msclr::interop::marshal_as<std::string>(filePath);
	}
	else {
		return; //if one chooses "no" in dialog, exits function
	}

	listBox2->Items->Add(filePath); //******* add check for cancel option
	System::IO::FileInfo^ fileSize = gcnew System::IO::FileInfo(filePath);
	listBox5->Items->Add(((fileSize->Length) * .001) + " KB");

	long long fileSizeInBytes = fileSize->Length; //used to guess Total number of items based on file size
	double totNumItems = Math::Round(fileSizeInBytes * 7.5 / 1024000.0); //the guess of how many items based on file size

	int inHouse = Int32::Parse(textBox1->Text);
	int conSolidated = Int32::Parse(textBox2->Text);
	int sevenEight = Int32::Parse(textBox3->Text);
	int otherImports = Int32::Parse(textBox4->Text);

	int n6092;
	int n6022;
	int n6938;
	int n6561;
	int n7078;

	DateTime now = DateTime::Now;
	DateTime inHouseDate = now.AddDays(-inHouse);
	DateTime conSolidatedDate = now.AddDays(-conSolidated);
	DateTime sevenEightDate = now.AddDays(-sevenEight);
	DateTime otherImportDate = now.AddDays(-otherImports);

	listBox1->Items->Clear();
	//determine which boxes are checked
	if (checkBox1->Checked == true) {
		n6092 = 1;
	}
	else {
		n6092 = 0;
	}

	if (checkBox2->Checked == true) {
		n6022 = 1;
	}
	else {
		n6022 = 0;
	}

	if (checkBox3->Checked == true) {
		n6938 = 1;
	}
	else {
		n6938 = 0;
	}

	if (checkBox4->Checked == true) {
		n6561 = 1;
	}
	else {
		n6561 = 0;
	}

	if (checkBox5->Checked == true) {
		n7078 = 1;
	}
	else {
		n7078 = 0;
	}

	listBox4->Items->Clear();
	//fill in the log
	if (n6092 == 1) {
		listBox4->Items->Add("6092 - " + inHouseDate.ToString("MM/dd/yyyy"));
	}
	else {
		listBox4->Items->Add("6092 - not loaded");
	}
	if (n6022 == 1) {
		listBox4->Items->Add("6022 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	else {
		listBox4->Items->Add("6022 - not loaded");
	}
	if (n6938 == 1) {
		listBox4->Items->Add("6938 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	else {
		listBox4->Items->Add("6938 - not loaded");
	}
	if (n6561 == 1) {
		listBox4->Items->Add("6561 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	else {
		listBox4->Items->Add("6561 - not loaded");
	}
	if (n7078 == 1) {
		listBox4->Items->Add("7078 - " + sevenEightDate.ToString("MM/dd/yyyy"));
	}
	else {
		listBox4->Items->Add("7078 - not loaded");
	}
	listBox4->Items->Add("Others - " + otherImportDate.ToString("MM/dd/yyyy"));

	progressBar1->Minimum = 0;
	progressBar1->Maximum = totNumItems + 1;
	int everyK = 0;
	int pBar = 0;
	int loadCount = 0;

	try
	{
		StreamReader^ din = File::OpenText(filePath); //opens file

		String^ strLine;
		listBox1->BeginUpdate();
		for (int i = 0; i < 17; ++i) { //skips first 17 lines shich is html header info.
			strLine = din->ReadLine();
		}
		while ((strLine = din->ReadLine()) != nullptr)
		{
			if (strLine != "" && strLine->Substring(0, 1) != "<") {
				listBox1->Items->Add(strLine);
				lineForC = msclr::interop::marshal_as<string>(strLine);
				everyK = everyK + 1;
				loadCount = loadCount + 1;
				if (everyK == 1000) {
					pBar = pBar + 1;
					if (pBar <= (totNumItems + 1)) {
						progressBar1->Value = pBar;
					}
					progressBar1->Refresh();
					everyK = 0;
				}
				if (SelectItem(lineForC, inHouse, conSolidated, sevenEight, otherImports, n6092, n6022, n6938, n6561, n7078, offSet)) {
					listBox1->SetSelected(loadCount-1, true);
				}
			}
		}
		listBox1->EndUpdate();
		progressBar1->Value = totNumItems + 1;
		progressBar1->Refresh();
		label17->Text = Get271Size().ToString();
		label19->Text = listBox1->SelectedIndices->Count.ToString();
	}
	catch (Exception ^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
			MessageBox::Show("file '{0}' not found", filePath);
		else
			MessageBox::Show("End Of File", filePath);
	}

	textBox7->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(10 + offSet, 9);
	textBox9->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(19 + offSet, 5);
	textBox8->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(24 + offSet, 2);
	textBox10->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(26 + offSet, 5);
	textBox11->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(31 + offSet, 6);
}

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	// Change the color of the link text by setting LinkVisited
   // to true.
	int testValue = String::Compare(linkLabel1->Text, "InputFile");
	if (testValue != 0) {
		linkLabel1->LinkVisited = true;
		//Call the Process.Start method to open the default browser
		//with a URL:
		System::Diagnostics::Process::Start(linkLabel1->Text);
	}
}
	   //preview script button
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int offSet = Int32::Parse(textBox12->Text);
	int arrSize = listBox1->SelectedItems->Count;
	cli::array<System::String^>^ sixNine = gcnew cli::array<System::String^>(arrSize);
	String^ sixNineLine;
	int j = 0;
	richTextBox1->Clear();
	//script header
	richTextBox1->AppendText("[ScriptInputGUBR - Void Keyer.txt]\n12 - 05 - 2013\nGUBR\n[END]\n'\n' Replace the question marks (?) with the appropriate information as\n' defined below:\n'\n'     [PASSWORD]? <-- Replace ? with the password used by the GUBR screen.\n'     [USERID]? <-- Replace ? with the user ID used by the GUBR screen.\n'     [STORE]26<-- Replace the 26 with the starting column of the store.\n'     [DIV]30<-- Replace the 30 with the starting column of the division.\n'     [CARTON]32 <-- Replace the 32 with the starting column of the carton.\n'     [ITEM]16  <-- Replace the 16 with the starting column of the item.\n'     [CODE]? <-- Replace ? with OUT, D01, SHP, XDK etc as used by the GUBR screen.\n'     ## <-- Replace ## with the data specifing what is to be voided by the GUBR screen.\n'\n' The below settings are the defaults and reflect the 0271key report\n' If you use another report (or data) you will need to adjust the\n' values accordingly.\n'\n' Use as many [CODE] definitions (followed by more data) to void each\n' type of void you have.\n'\n[START]\n[PASSWORD]password\n[USERID]userID\n[STORE]" + (20 + offSet).ToString() + "\n[DIV]" + (25 + offSet).ToString() + "\n[CARTON]" + (27 + offSet).ToString() + "\n[ITEM]" + (11 + offSet).ToString() + "\n[CODE]xdk\n");
	
	for (int i = 0; i < arrSize; ++i) {
		//
		//******************* reads off of listbox, change to vector
		// ****************** need to update vector from individual select first
		// 
		//Seperates selected into 6092 or not
		String^ dcNum = listBox1->GetItemText(listBox1->SelectedItems[i])->Substring(27 + offSet, 4);
		int sixNineTwoSearch = String::Compare(dcNum, "6092");

		if (sixNineTwoSearch == 0) {
			//if 6092, save line into array
			sixNineLine = listBox1->GetItemText(listBox1->SelectedItems[i]) + "\n";
			sixNine[j] = sixNineLine;
			j = j + 1;
		}
		else {
			//pastes into next line in preview
			richTextBox1->AppendText(listBox1->GetItemText(listBox1->SelectedItems[i]) + "\n");
		}
	}
	//shp status for 6092
	richTextBox1->AppendText("[CODE]shp\n");
	//pastes 6092 lines next
	for (int i = 0; i < j; ++i) {
		richTextBox1->AppendText(sixNine[i]);
	}
	richTextBox1->AppendText("[END]");
}
	   //Save GUBR Script button
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SaveFile("ScriptInputGUBR - Void Keyer.txt", RichTextBoxStreamType::PlainText);
	linkLabel2->Text = "ScriptInputGUBR - Void Keyer.txt";
	MessageBox::Show("File Saved");
}
	   //Opens original input file from clicking on link
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	// Change the color of the link text by setting LinkVisited
   // to true.
	int testValue = String::Compare(linkLabel1->Text, "OutputFile");
	if (testValue != 0) {
		linkLabel2->LinkVisited = true;
		//Call the Process.Start method to open the default browser
		//with a URL:
		System::Diagnostics::Process::Start(linkLabel2->Text);
	}
}
	   //6092 checkbox
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	DateTime now = DateTime::Now;
	int inHouse = Int32::Parse(textBox1->Text);
	DateTime inHouseDate = now.AddDays(-inHouse);
	int everyK = 0;
	int pBar = 0;
	int pBarMax = Math::Round(Get6092Size() / 100) + 1;
	progressBar1->Minimum = 0;
	progressBar1->Maximum = pBarMax;
	progressBar1->Value = 0;
	listBox1->BeginUpdate();
	if (checkBox1->Checked == false) {
		for (int i = 0; i < Get6092Size(); i++) {
			listBox1->SetSelected(Remove6092(i,0), false);
			//the below condition is for the progress bar
			everyK = everyK + 1;  
			if (everyK == 100) {  //every 100 items processed moves the progress bar 1 unit
				pBar = pBar + 1;
				if (pBar <= pBarMax) {
					progressBar1->Value = pBar;
				}
				progressBar1->Refresh();
				everyK = 0;
			}
		}
		listBox4->Items->RemoveAt(0);
		listBox4->Items->Insert(0, "6092 - not loaded (" + Get6092Size().ToString() + ")");
	}
	else {
		for (int i = 0; i < Get6092Size(); i++) {
			listBox1->SetSelected(Remove6092(i, 1), true);
			//the below condition is for the progress bar
			everyK = everyK + 1;
			if (everyK == 100) {  //every 100 items processed moves the progress bar 1 unit
				pBar = pBar + 1;
				if (pBar <= pBarMax) {
					progressBar1->Value = pBar;
				}
				progressBar1->Refresh();
				everyK = 0;
			}
		}
		listBox4->Items->RemoveAt(0);
		listBox4->Items->Insert(0, "6092 - " + inHouseDate.ToString("MM/dd/yyyy"));
	
	}
	listBox1->EndUpdate();
	label19->Text = listBox1->SelectedIndices->Count.ToString();
	progressBar1->Value = pBarMax;
	progressBar1->Refresh();
}
	   //6022 checkbox
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	int conSolidated = Int32::Parse(textBox2->Text);
	DateTime now = DateTime::Now;
	DateTime conSolidatedDate = now.AddDays(-conSolidated);
	int everyK = 0;
	int pBar = 0;
	int pBarMax = Math::Round(Get6022Size() / 100) + 1;
	progressBar1->Minimum = 0;
	progressBar1->Maximum = pBarMax;
	progressBar1->Value = 0;
	listBox1->BeginUpdate();
	if (checkBox2->Checked == false) {
		for (int i = 0; i < Get6022Size(); i++) {
			listBox1->SetSelected(Remove6022(i, 0), false);
			//the below condition is for the progress bar
			everyK = everyK + 1;
			if (everyK == 100) {  //every 100 items processed moves the progress bar 1 unit
				pBar = pBar + 1;
				if (pBar <= pBarMax) {
					progressBar1->Value = pBar;
				}
				progressBar1->Refresh();
				everyK = 0;
			}
		}
		listBox4->Items->RemoveAt(1);
		listBox4->Items->Insert(1, "6022 - not loaded (" + Get6022Size().ToString() + ")");
	}
	else {
		for (int i = 0; i < Get6022Size(); i++) {
			listBox1->SetSelected(Remove6022(i, 1), true);
			//the below condition is for the progress bar
			everyK = everyK + 1;
			if (everyK == 100) {  //every 100 items processed moves the progress bar 1 unit
				pBar = pBar + 1;
				if (pBar <= pBarMax) {
					progressBar1->Value = pBar;
				}
				progressBar1->Refresh();
				everyK = 0;
			}
		}
		listBox4->Items->RemoveAt(1);
		listBox4->Items->Insert(1, "6022 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	listBox1->EndUpdate();
	label19->Text = listBox1->SelectedIndices->Count.ToString();
	progressBar1->Value = pBarMax;
	progressBar1->Refresh();
}
	   //6938 checkbox
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	int conSolidated = Int32::Parse(textBox2->Text);
	DateTime now = DateTime::Now;
	DateTime conSolidatedDate = now.AddDays(-conSolidated);
	int everyK = 0;
	int pBar = 0;
	int pBarMax = Math::Round(Get6938Size() / 100) + 1;
	progressBar1->Minimum = 0;
	progressBar1->Maximum = pBarMax;
	progressBar1->Value = 0;
	listBox1->BeginUpdate();
	if (checkBox3->Checked == false) {
		for (int i = 0; i < Get6938Size(); i++) {
			listBox1->SetSelected(Remove6938(i, 0), false);
			//the below condition is for the progress bar
			everyK = everyK + 1;
			if (everyK == 100) {  //every 100 items processed moves the progress bar 1 unit
				pBar = pBar + 1;
				if (pBar <= pBarMax) {
					progressBar1->Value = pBar;
				}
				progressBar1->Refresh();
				everyK = 0;
			}
		}
		listBox4->Items->RemoveAt(2);
		listBox4->Items->Insert(2, "6938 - not loaded (" + Get6938Size().ToString() + ")");
	}
	else {
		for (int i = 0; i < Get6938Size(); i++) {
			listBox1->SetSelected(Remove6938(i, 1), true);
			//the below condition is for the progress bar
			everyK = everyK + 1;
			if (everyK == 100) {  //every 100 items processed moves the progress bar 1 unit
				pBar = pBar + 1;
				if (pBar <= pBarMax) {
					progressBar1->Value = pBar;
				}
				progressBar1->Refresh();
				everyK = 0;
			}
		}
		listBox4->Items->RemoveAt(2);
		listBox4->Items->Insert(2, "6938 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	listBox1->EndUpdate();
	label19->Text = listBox1->SelectedIndices->Count.ToString();
	progressBar1->Value = pBarMax;
	progressBar1->Refresh();
}
	   //6561 checkbox
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	int conSolidated = Int32::Parse(textBox2->Text);
	DateTime now = DateTime::Now;
	DateTime conSolidatedDate = now.AddDays(-conSolidated);
	int everyK = 0;
	int pBar = 0;
	int pBarMax = Math::Round(Get6561Size() / 100) + 1;
	progressBar1->Minimum = 0;
	progressBar1->Maximum = pBarMax;
	progressBar1->Value = 0;
	listBox1->BeginUpdate();
	if (checkBox4->Checked == false) {
		for (int i = 0; i < Get6561Size(); i++) {
			listBox1->SetSelected(Remove6561(i, 0), false);
			//the below condition is for the progress bar
			everyK = everyK + 1;
			if (everyK == 100) {  //every 100 items processed moves the progress bar 1 unit
				pBar = pBar + 1;
				if (pBar <= pBarMax) {
					progressBar1->Value = pBar;
				}
				progressBar1->Refresh();
				everyK = 0;
			}
		}
		listBox4->Items->RemoveAt(3);
		listBox4->Items->Insert(3, "6561 - not loaded (" + Get6561Size().ToString() + ")");
	}
	else {
		for (int i = 0; i < Get6561Size(); i++) {
			listBox1->SetSelected(Remove6561(i, 1), true);
			//the below condition is for the progress bar
			everyK = everyK + 1;
			if (everyK == 100) {  //every 100 items processed moves the progress bar 1 unit
				pBar = pBar + 1;
				if (pBar <= pBarMax) {
					progressBar1->Value = pBar;
				}
				progressBar1->Refresh();
				everyK = 0;
			}
		}
		listBox4->Items->RemoveAt(3);
		listBox4->Items->Insert(3, "6561 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	listBox1->EndUpdate();
	label19->Text = listBox1->SelectedIndices->Count.ToString();
	progressBar1->Value = pBarMax;
	progressBar1->Refresh();
}
	   //7078 checkbox
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	DateTime now = DateTime::Now;
	int sevenEight = Int32::Parse(textBox3->Text);
	DateTime sevenEightDate = now.AddDays(-sevenEight);

	int everyK = 0;
	int pBar = 0;
	int pBarMax = Math::Round(Get7078Size() / 100) + 1;

	//set progress bar properties
	progressBar1->Minimum = 0;
	progressBar1->Maximum = pBarMax;
	progressBar1->Value = 0;

	listBox1->BeginUpdate();

	if (checkBox5->Checked == false) {	//if box isn't checked
		for (int i = 0; i < Get7078Size(); i++) {
			listBox1->SetSelected(Remove7078(i, 0), false);
			//the below condition is for the progress bar
			everyK = everyK + 1;
			if (everyK == 100) {  //every 100 items processed moves the progress bar 1 unit
				pBar = pBar + 1;
				if (pBar <= pBarMax) {
					progressBar1->Value = pBar;
				}
				progressBar1->Refresh();
				everyK = 0;
			}
		}
		//update log with "not loaded" status
		listBox4->Items->RemoveAt(4);
		listBox4->Items->Insert(4, "7078 - not loaded (" + Get7078Size().ToString() + ")");
	}
	else {
		for (int i = 0; i < Get7078Size(); i++) {
			listBox1->SetSelected(Remove7078(i, 1), true);
			//the below condition is for the progress bar
			everyK = everyK + 1;
			if (everyK == 100) {  //every 100 items processed moves the progress bar 1 unit
				pBar = pBar + 1;
				if (pBar <= pBarMax) {
					progressBar1->Value = pBar;
				}
				progressBar1->Refresh();
				everyK = 0;
			}
		}

		//update log with data
		listBox4->Items->RemoveAt(4);
		listBox4->Items->Insert(4, "7078 - " + sevenEightDate.ToString("MM/dd/yyyy"));
	}
	listBox1->EndUpdate();
	label19->Text = listBox1->SelectedIndices->Count.ToString();
	progressBar1->Value = pBarMax;
	progressBar1->Refresh();
}
	//offset up button
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox12->Text = (Int32::Parse(textBox12->Text) + 1).ToString();
	if (listBox1->Items->Count > 0) {
		int offSet = Int32::Parse(textBox12->Text);
		if (offSet < 96) {
			textBox7->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(10 + offSet, 9);
			textBox9->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(19 + offSet, 5);
			textBox8->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(24 + offSet, 2);
			textBox10->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(26 + offSet, 5);
			textBox11->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(31 + offSet, 6);
		}
		else {
			MessageBox::Show("End of Line");
		}
	}
}
	   //offset down button
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox12->Text = (Int32::Parse(textBox12->Text) - 1).ToString();
	if (listBox1->Items->Count > 0) {
		int offSet = Int32::Parse(textBox12->Text);
		if (offSet >= -10) {
			textBox7->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(10 + offSet, 9);
			textBox9->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(19 + offSet, 5);
			textBox8->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(24 + offSet, 2);
			textBox10->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(26 + offSet, 5);
			textBox11->Text = listBox1->GetItemText(listBox1->Items[1])->Substring(31 + offSet, 6);
		}
		else {
			MessageBox::Show("End of Line");
		}
	}
}

private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ TextfromRTB = richTextBox2->Text;
	string remList = msclr::interop::marshal_as<string>(TextfromRTB);
	int everyK = 0;
	int pBar = 0;

	listBox1->BeginUpdate();
	listBox4->BeginUpdate();
	if (radioButton1->Checked) {
		RemoveItem(remList);
	}
	else if (radioButton2->Checked) {
		std::vector<int> storeArray;
		cli::array<System::String^>^ rtbLines = richTextBox2->Lines;
		for each (String ^ forELine in rtbLines)
		{
			if (!String::IsNullOrEmpty(forELine)) {
				std::string lineStr = msclr::interop::marshal_as<std::string>(forELine);
				int intValue = std::stoi(lineStr);
				storeArray.push_back(intValue);
			}
		}
		RemoveStore(storeArray);
	}
	else if (radioButton3->Checked) {
		std::vector<int> distroArray;
		cli::array<System::String^>^ rtbLines = richTextBox2->Lines;
		for each (String ^ forELine in rtbLines)
		{
			if (!String::IsNullOrEmpty(forELine)) {
				std::string lineStr = msclr::interop::marshal_as<std::string>(forELine);
				int intValue = std::stoi(lineStr);
				distroArray.push_back(intValue);
			}
		}
		RemoveDistro(distroArray);
	}
	int pBarMax = Math::Round(GetRemoveSize() / 100) + 1;
	progressBar1->Minimum = 0;
	progressBar1->Maximum = pBarMax;
	progressBar1->Value = 0;
	for (int i = 0; i < GetRemoveSize(); i++) {
		listBox1->SetSelected(GetRemoveArray(i), false);
		//the block below updates the progress bar
		everyK = everyK + 1;
		if (everyK == 100) { //every hundred elements increments the progress bar by 1
			pBar = pBar + 1;
			if (pBar <= pBarMax) {
				progressBar1->Value = pBar;
			}
			progressBar1->Refresh();
			everyK = 0;
		}

	}
	listBox1->EndUpdate();
	listBox4->EndUpdate();
	listBox4->Items->Add("Itmes from List Removed");
	progressBar1->Value = pBarMax;
	progressBar1->Refresh();

	label19->Text = listBox1->SelectedIndices->Count.ToString();
}

private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked) {
		//StreamReader^ reader = gcnew StreamReader("ItemList.txt");
		StreamReader^ reader = gcnew StreamReader("ItemList.txt");
		String^ fileContents = reader->ReadToEnd();
		reader->Close();
		richTextBox2->Text = fileContents;
	}
	else if (radioButton2->Checked){
		//StreamReader^ reader = gcnew StreamReader("StoreList.txt");
		StreamReader^ reader = gcnew StreamReader("StoreList.txt");
		String^ fileContents = reader->ReadToEnd();
		reader->Close();
		richTextBox2->Text = fileContents;
	}
	else if (radioButton3->Checked) {
		//StreamReader^ reader = gcnew StreamReader("DistroList.txt");
		StreamReader^ reader = gcnew StreamReader("DistroList.txt");
		String^ fileContents = reader->ReadToEnd();
		reader->Close();
		richTextBox2->Text = fileContents;
	}
}
private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	linkLabel3->LinkVisited = true;
	//Call the Process.Start method to open the default browser
	//with a URL:
	System::Diagnostics::Process::Start(linkLabel3->Text);
}
	   //clear item/store/DC textbox
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox2->Text = "";
}
	   //changes count when items are manually selected/unselected on listbox
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	label19->Text = listBox1->SelectedIndices->Count.ToString();  //updates the "number selected" label
}
	   //radioButtons
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked) {
		radioButton2->Checked = false;
		radioButton3->Checked = false;
	}
	button3->Text = "Remove Items";
	linkLabel3->Text = "ItemList.txt";
	StreamReader^ reader = gcnew StreamReader("ItemList.txt");
	String^ fileContents = reader->ReadToEnd();
	reader->Close();
	richTextBox2->Text = fileContents;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked) {
		radioButton1->Checked = false;
		radioButton3->Checked = false;
	}
	button3->Text = "Remove Stores";
	linkLabel3->Text = "StoreList.txt";
	StreamReader^ reader = gcnew StreamReader("StoreList.txt");
	String^ fileContents = reader->ReadToEnd();
	reader->Close();
	richTextBox2->Text = fileContents;
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton3->Checked) {
		radioButton1->Checked = false;
		radioButton2->Checked = false;
	}
	button3->Text = "Remove DC's";
	linkLabel3->Text = "DistroList.txt";
	StreamReader^ reader = gcnew StreamReader("DistroList.txt");
	String^ fileContents = reader->ReadToEnd();
	reader->Close();
	richTextBox2->Text = fileContents;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Minimum = 0;
	progressBar1->Maximum = 1000;
	progressBar1->Value = 10;
	progressBar1->Refresh();

	SQLHENV henv;
	SQLHDBC hdbc;
	SQLHSTMT hstmt;
	SQLRETURN ret;

	int n6092;
	int n6022;
	int n6938;
	int n6561;
	int n7078;

	int inHouse = Int32::Parse(textBox1->Text);
	int conSolidated = Int32::Parse(textBox2->Text);
	int sevenEight = Int32::Parse(textBox3->Text);
	int otherImports = Int32::Parse(textBox4->Text);
	DateTime now = DateTime::Now;
	DateTime inHouseDate = now.AddDays(-inHouse);
	DateTime conSolidatedDate = now.AddDays(-conSolidated);
	DateTime sevenEightDate = now.AddDays(-sevenEight);
	DateTime otherImportDate = now.AddDays(-otherImports);

	progressBar1->Value = 25;
	progressBar1->Refresh();

	NewLoad();

	listBox1->Items->Clear();
	//determine which boxes are checked
	if (checkBox1->Checked == true) {
		n6092 = 1;
	}
	else {
		n6092 = 0;
	}

	if (checkBox2->Checked == true) {
		n6022 = 1;
	}
	else {
		n6022 = 0;
	}

	if (checkBox3->Checked == true) {
		n6938 = 1;
	}
	else {
		n6938 = 0;
	}

	if (checkBox4->Checked == true) {
		n6561 = 1;
	}
	else {
		n6561 = 0;
	}

	if (checkBox5->Checked == true) {
		n7078 = 1;
	}
	else {
		n7078 = 0;
	}
	progressBar1->Value = 50;
	progressBar1->Refresh();

	//fill in the log
	if (n6092 == 1) {
		listBox4->Items->Add("6092 - " + inHouseDate.ToString("MM/dd/yyyy"));
	}
	else {
		listBox4->Items->Add("6092 - not loaded");
	}
	if (n6022 == 1) {
		listBox4->Items->Add("6022 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	else {
		listBox4->Items->Add("6022 - not loaded");
	}
	if (n6938 == 1) {
		listBox4->Items->Add("6938 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	else {
		listBox4->Items->Add("6938 - not loaded");
	}
	if (n6561 == 1) {
		listBox4->Items->Add("6561 - " + conSolidatedDate.ToString("MM/dd/yyyy"));
	}
	else {
		listBox4->Items->Add("6561 - not loaded");
	}
	if (n7078 == 1) {
		listBox4->Items->Add("7078 - " + sevenEightDate.ToString("MM/dd/yyyy"));
	}
	else {
		listBox4->Items->Add("7078 - not loaded");
	}
	listBox4->Items->Add("Others - " + otherImportDate.ToString("MM/dd/yyyy"));

	progressBar1->Value = 75;
	progressBar1->Refresh();

	int everyK = 0;
	int pBar = 0;
	int loadCount = 0;

	// Allocate environment handle and set ODBC version attribute
	ret = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &henv);
	ret = SQLSetEnvAttr(henv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, SQL_IS_INTEGER);
	ret = SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);

	SQLWCHAR connStr[256];
	SQLSMALLINT connStrLen;

	// Connect to the SQL Server
	ret = SQLDriverConnect(hdbc, NULL, (SQLWCHAR*)L"DRIVER={SQL Server};SERVER=DESKTOP-71S0I68;DATABASE=TestDatabase;Trusted_Connection=Yes;", SQL_NTS, connStr, 256, &connStrLen, SQL_DRIVER_NOPROMPT);

	progressBar1->Value = 100;
	progressBar1->Refresh();

	listBox1->BeginUpdate();

	if (ret == SQL_SUCCESS || ret == SQL_SUCCESS_WITH_INFO)
	{
		ret = SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);

		//The following builds the SQL Query based on the dates in the "days back" boxes
		String^ inHouseString = inHouseDate.ToString("yyyy-MM-dd 00:00:00");
		String^ conSolidString = conSolidatedDate.ToString("yyyy-MM-dd 00:00:00");
		String^ sevEightString = sevenEightDate.ToString("yyyy-MM-dd 00:00:00");
		String^ othImpString = otherImportDate.ToString("yyyy-MM-dd 00:00:00");

		SQLWCHAR* sqlInHouse = static_cast<SQLWCHAR*>(Marshal::StringToHGlobalUni(inHouseString).ToPointer());
		SQLWCHAR* sqlConSol = static_cast<SQLWCHAR*>(Marshal::StringToHGlobalUni(conSolidString).ToPointer());
		SQLWCHAR* sqlSevEight = static_cast<SQLWCHAR*>(Marshal::StringToHGlobalUni(sevEightString).ToPointer());
		SQLWCHAR* sqlOthImp = static_cast<SQLWCHAR*>(Marshal::StringToHGlobalUni(othImpString).ToPointer());

		SQLWCHAR* qU1 = static_cast<SQLWCHAR*>(Marshal::StringToHGlobalUni(L"SELECT store_nbr, div_nbr, origin_dc_nbr, ship_unit_nbr, label_timestamp, mds_fam_id FROM TestDatabase.dbo.shipping_unit WHERE label_timestamp < CASE WHEN origin_dc_nbr = 7078 THEN '").ToPointer());
		SQLWCHAR* qU2 = static_cast<SQLWCHAR*>(Marshal::StringToHGlobalUni(L"' WHEN origin_dc_nbr = 6092 THEN '").ToPointer());
		SQLWCHAR* qU3 = static_cast<SQLWCHAR*>(Marshal::StringToHGlobalUni(L"' WHEN origin_dc_nbr IN(6022, 6561, 7377, 6938) THEN '").ToPointer());
		SQLWCHAR* qU4 = static_cast<SQLWCHAR*>(Marshal::StringToHGlobalUni(L"' ELSE '").ToPointer());
		SQLWCHAR* qU5 = static_cast<SQLWCHAR*>(Marshal::StringToHGlobalUni(L"' END AND ship_unit_status = '';").ToPointer());


		size_t inHouseLen = wcslen(sqlInHouse);
		size_t conSolLen = wcslen(sqlConSol);
		size_t sevEightLen = wcslen(sqlSevEight);
		size_t oImpLen = wcslen(sqlOthImp);
		size_t sqlQueryLen = inHouseLen + conSolLen + sevEightLen + oImpLen;

		SQLWCHAR* concatQuery = new SQLWCHAR[sqlQueryLen + 184 + 35 + 55 + 9 + 33 + 1];

		// Copy the individual SQLWCHAR* strings into the new buffer
		wcscpy_s(concatQuery, 184, qU1);
		wcscat_s(concatQuery, 184 + sevEightLen + 1, sqlSevEight);
		wcscat_s(concatQuery, 184 + sevEightLen + 35 + 1, qU2);
		wcscat_s(concatQuery, 184 + sevEightLen + 35 + inHouseLen + 1, sqlInHouse);
		wcscat_s(concatQuery, 184 + sevEightLen + 35 + inHouseLen + 55 + 1, qU3);
		wcscat_s(concatQuery, 184 + sevEightLen + 35 + inHouseLen + 55 + conSolLen + 1, sqlConSol);
		wcscat_s(concatQuery, 184 + sevEightLen + 35 + inHouseLen + 55 + conSolLen + 9 + 1, qU4);
		wcscat_s(concatQuery, 184 + sevEightLen + 35 + inHouseLen + 55 + conSolLen + 9 + oImpLen + 1, sqlOthImp);
		wcscat_s(concatQuery, sqlQueryLen + 184 + 35 + 55 + 9 + 33 + 1, qU5);

		// Execute the SQL query
		ret = SQLExecDirect(hstmt, concatQuery , SQL_NTS);

		progressBar1->Value = 125;
		progressBar1->Refresh();

		if (ret == SQL_SUCCESS || ret == SQL_SUCCESS_WITH_INFO)
		{
			// Variables to store the retrieved data
			SQLINTEGER store_nbr, div_nbr, origin_dc_nbr;
			SQLWCHAR ship_unit_nbr[50];
			SQLLEN ship_unit_nbr_len;
			SQLWCHAR mds_fam_id[50];
			SQLLEN mds_fam_id_len;
			SQL_TIMESTAMP_STRUCT label_timestamp;
			int i = 0;

			progressBar1->Value = 150;
			progressBar1->Refresh();

			while (SQLFetch(hstmt) == SQL_SUCCESS)
			{
				// Get the data from the current row
				SQLGetData(hstmt, 1, SQL_C_LONG, &store_nbr, 0, NULL);
				SQLGetData(hstmt, 2, SQL_C_LONG, &div_nbr, 0, NULL);
				SQLGetData(hstmt, 3, SQL_C_LONG, &origin_dc_nbr, 0, NULL);
				SQLGetData(hstmt, 4, SQL_C_WCHAR, ship_unit_nbr, sizeof(ship_unit_nbr), &ship_unit_nbr_len);
				SQLGetData(hstmt, 5, SQL_C_TYPE_TIMESTAMP, &label_timestamp, 0, NULL);
				SQLGetData(hstmt, 6, SQL_C_WCHAR, mds_fam_id, sizeof(mds_fam_id), &mds_fam_id_len);

				// Convert the retrieved data to appropriate types and display it using MessageBox::Show.
				int storeNbr = static_cast<int>(store_nbr);
				int divNbr = static_cast<int>(div_nbr);
				int originDcNbr = static_cast<int>(origin_dc_nbr);
				String^ shipUnitNbr = gcnew String((wchar_t*)ship_unit_nbr);
				string newCartonNbr = msclr::interop::marshal_as<std::string>(shipUnitNbr);
				String^ labelTimestamp = String::Format("{0}-{1:00}-{2:00} {3:00}:{4:00}:{5:00}",
					label_timestamp.year, label_timestamp.month, label_timestamp.day,
					label_timestamp.hour, label_timestamp.minute, label_timestamp.second);
				string labelTimestampStr = msclr::interop::marshal_as<std::string>(labelTimestamp);
				// Convert the label_timestamp to a DateTime object
				DateTime dt = DateTime::Parse(gcnew String(labelTimestamp));
				String^ mdsFamId = gcnew String((wchar_t*)mds_fam_id);

				int newRecMonth = System::Convert::ToInt32(dt.Month);
				int newRecDay = System::Convert::ToInt32(dt.Day);
				int newRecYear = System::Convert::ToInt32(dt.Year) - 2000;

				// Convert SQLCHAR* to String^
				string newItemNumber = msclr::interop::marshal_as<std::string>(mdsFamId);

				bool selectLine = LoadFromDB(inHouse, conSolidated, sevenEight, otherImports, newItemNumber, storeNbr, originDcNbr, newRecMonth, newRecDay, newRecYear, n6092, n6022, n6938, n6561, n7078);
				String^ listLine = msclr::interop::marshal_as<System::String^>(ListBoxString(i, divNbr, newCartonNbr));
				listBox1->Items->Add(listLine);
				listBox1->SetSelected(i, selectLine);
				i = i + 1;
				everyK = everyK + 1;
				loadCount = loadCount + 1;
				if (everyK == 50) {
					pBar = pBar + 1;
					if (pBar <= (1000)) {
						progressBar1->Value = pBar;
					}
					else {
						pBar = 0;
					}
					progressBar1->Refresh();
					everyK = 0;
				}
			}
		}
		else
		{
			// If the SQLExecDirect call fails, get the diagnostic record to display the error message
			// ... Code to get and display the error message ...
			SQLWCHAR sqlState[6], message[SQL_MAX_MESSAGE_LENGTH];
			SQLINTEGER nativeError;
			SQLSMALLINT actualMessageLength;

			SQLGetDiagRec(SQL_HANDLE_STMT, hstmt, 1, sqlState, &nativeError, message, SQL_MAX_MESSAGE_LENGTH, &actualMessageLength);

			String^ errorMessage = gcnew String((wchar_t*)message);
			MessageBox::Show(errorMessage);
		}

		SQLFreeHandle(SQL_HANDLE_STMT, hstmt);
	}
	else
	{
		// If the connection fails, get the diagnostic record to display the error message
		// ... Code to get and display the error message ...
		SQLWCHAR sqlState[6], message[SQL_MAX_MESSAGE_LENGTH];
		SQLINTEGER nativeError;
		SQLSMALLINT actualMessageLength;

		SQLGetDiagRec(SQL_HANDLE_DBC, hdbc, 1, sqlState, &nativeError, message, SQL_MAX_MESSAGE_LENGTH, &actualMessageLength);

		String^ errorMessage = gcnew String((wchar_t*)message);
		MessageBox::Show(errorMessage);
	}

	listBox1->EndUpdate();
	label17->Text = Get271Size().ToString();
	label19->Text = listBox1->SelectedIndices->Count.ToString();
	progressBar1->Value = 1000;
	progressBar1->Refresh();
	SQLDisconnect(hdbc);
	SQLFreeHandle(SQL_HANDLE_DBC, hdbc);
	SQLFreeHandle(SQL_HANDLE_ENV, henv);
}
};
}
