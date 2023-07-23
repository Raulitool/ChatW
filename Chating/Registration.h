#pragma once
#include<string>
#include<fstream>
#include <msclr/marshal_cppstd.h>
using namespace std;

namespace Chating {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
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
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ CloseButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ passField;
	private: System::Windows::Forms::TextBox^ loginField;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registration::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->passField = (gcnew System::Windows::Forms::TextBox());
			this->loginField = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->CloseButton = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->passField);
			this->panel1->Controls->Add(this->loginField);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(481, 561);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(145, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 50);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Регистрация";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Registration::button1_Click);
			// 
			// passField
			// 
			this->passField->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->passField->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passField->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passField->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->passField->Location = System::Drawing::Point(120, 308);
			this->passField->Name = L"passField";
			this->passField->PasswordChar = '*';
			this->passField->Size = System::Drawing::Size(302, 51);
			this->passField->TabIndex = 8;
			this->passField->UseSystemPasswordChar = true;
			this->passField->TextChanged += gcnew System::EventHandler(this, &Registration::passField_TextChanged);
			// 
			// loginField
			// 
			this->loginField->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->loginField->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->loginField->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginField->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->loginField->Location = System::Drawing::Point(120, 209);
			this->loginField->Multiline = true;
			this->loginField->Name = L"loginField";
			this->loginField->Size = System::Drawing::Size(302, 51);
			this->loginField->TabIndex = 7;
			this->loginField->TextChanged += gcnew System::EventHandler(this, &Registration::loginField_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->panel2->Controls->Add(this->CloseButton);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(481, 50);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Registration::panel2_Paint);
			this->panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Registration::panel2_MouseDown);
			this->panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Registration::panel2_MouseMove);
			// 
			// CloseButton
			// 
			this->CloseButton->AutoSize = true;
			this->CloseButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CloseButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->CloseButton->Location = System::Drawing::Point(457, 6);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(19, 18);
			this->CloseButton->TabIndex = 1;
			this->CloseButton->Text = L"X";
			this->CloseButton->Click += gcnew System::EventHandler(this, &Registration::CloseButton_Click);
			this->CloseButton->MouseEnter += gcnew System::EventHandler(this, &Registration::CloseButton_MouseEnter);
			this->CloseButton->MouseLeave += gcnew System::EventHandler(this, &Registration::CloseButton_MouseLeave);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->label1->Location = System::Drawing::Point(139, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Авторизация";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(33, 289);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(70, 70);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(33, 187);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 70);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(481, 561);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Registration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->Load += gcnew System::EventHandler(this, &Registration::Registration_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void Registration_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ name = loginField->Text;
		System::String^ password = passField->Text;
		std::string nameStr = msclr::interop::marshal_as<std::string>(name);
		std::string passwordStr = msclr::interop::marshal_as<std::string>(password);
		nameStr += ".txt";
		const char* nameCStr = nameStr.c_str();
		const char* passwordCStr = passwordStr.c_str();

		String^ folderPath = System::Windows::Forms::Application::StartupPath;
		std::string filePath = msclr::interop::marshal_as<std::string>(folderPath) + "\\" + nameStr;
		const char* filePathCStr = filePath.c_str();

		std::ofstream User(filePathCStr);
		if (User.is_open()) {
			User << passwordCStr;
			User.close();

			Owner->Show();
			this->Close();
		}
		else {
			MessageBox::Show("Не удалось сохранить файл", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	
private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	
}

	   Point lastPoint;
private: System::Void panel2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		this->Left += e->X - lastPoint.X;
		this->Top += e->Y - lastPoint.Y;

	}
}
	   private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	   }
private: System::Void panel2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	lastPoint = Point(e->X, e->Y);
}
private: System::Void CloseButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	CloseButton->ForeColor = Color::FromArgb(0xFD, 0xE7, 0xE7);
	CloseButton->BackColor = Color::FromArgb(0xF2, 0x3F, 0x42);
}
private: System::Void CloseButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	CloseButton->ForeColor = Color::FromArgb(0xF2, 0xF3, 0xEA);
	CloseButton->BackColor = Color::FromArgb(0x1E, 0x1F, 0x22);
}
private: System::Void loginField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void passField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
