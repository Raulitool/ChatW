#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <msclr/marshal_cppstd.h> // Добавлен заголовочный файл <msclr/marshal_cppstd.h>
#include <filesystem> // Добавлен заголовочный файл <filesystem>

namespace Chating {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	

	/// <summary>
	/// Сводка для Chat
	/// </summary>
	public ref class Chat : public System::Windows::Forms::Form
	{
	

	public:
		Chat(void)
		{

			InitializeComponent();
			messages = gcnew System::Collections::Generic::List<String^>();
			// Загружаем данные из файла при запуске формы
			LoadMessagesFromFile();

			// TODO: добавьте код конструктора
				
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Chat::Chat_FormClosed);
		}

		

		// Добавьте поле для хранения текста richTextBox1
	
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListBox^ listBox1;
	
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Chat::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(704, 601);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->label2->Location = System::Drawing::Point(538, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Enter(отправить)";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->richTextBox1->Location = System::Drawing::Point(168, 110);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(530, 440);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Chat::richTextBox1_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->textBox1->Location = System::Drawing::Point(168, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(370, 29);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Chat::textBox1_TextChanged);
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Chat::textBox1_KeyUp);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->button2->Location = System::Drawing::Point(168, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(536, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Обновить данные";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Chat::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->button1->Location = System::Drawing::Point(0, 556);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(704, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Дополнительный  пользователь";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Chat::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(0, 41);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(168, 560);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Chat::listBox1_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(704, 41);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Общий чат";
			this->label1->Click += gcnew System::EventHandler(this, &Chat::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Chat::button2_Click);
			// 
			// Chat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 601);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Chat";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chat";
			this->Load += gcnew System::EventHandler(this, &Chat::Chat_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		label2->Visible = false;
		richTextBox1->Visible = false;
		textBox1->Visible = false;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {




	Owner->Show();
	
}

	  private: System::Void Chat_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
	  {
		  // Получение пути к папке, в которой выполняется приложение
		  String^ folderPath = System::Windows::Forms::Application::StartupPath;

		  // Формируем путь к файлу
		  String^ filePath = System::IO::Path::Combine(folderPath, "messages.txt");

		  // Удаляем файл
		  System::IO::File::Delete(filePath);
	  }

private: System::Void Chat_Load(System::Object^ sender, System::EventArgs^ e) {
	// Очистка ListBox1 перед добавлением новых элементов
	
	label2->Visible = false;
	richTextBox1->Visible = false;
	textBox1->Visible = false;

	// Получение пути к папке, в которой выполняется приложение
	String^ folderPath = System::Windows::Forms::Application::StartupPath;
	




	// Открытие потока для чтения содержимого папки
	std::string folderPathStr = msclr::interop::marshal_as<std::string>(folderPath);
	std::vector<std::string> filenames;
	for (const auto& entry : std::filesystem::directory_iterator(folderPathStr)) {
		// Получение имени файла
		std::string filename = entry.path().filename().string();

		// Проверка расширения файла
		if (filename.size() > 4 && filename.substr(filename.size() - 4) == ".txt") {
			// Удаление расширения из имени файла
			filename = filename.substr(0, filename.size() - 4);

			// Добавление имени файла в вектор
			filenames.push_back(filename);
		}
	}

	// Сортировка имен файлов
	std::sort(filenames.begin(), filenames.end());

	// Добавление имен файлов в ListBox1
	for (const auto& filename : filenames) {
		String^ filenameStr = gcnew String(filename.c_str());
		listBox1->Items->Add(filenameStr);
	}
}

	   private: System::Collections::Generic::List<String^>^ messages;// добавил
			 
				
				
			  private: void LoadMessagesFromFile()
			  {
				  // Получение пути к папке, в которой выполняется приложение
				  String^ folderPath = System::Windows::Forms::Application::StartupPath;

				  // Формируем путь к файлу
				  String^ filePath = System::IO::Path::Combine(folderPath, "messages.txt");

				  // Проверяем, существует ли файл
				  if (System::IO::File::Exists(filePath))
				  {
					  // Открываем поток для чтения данных из файла
					  System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);

					  // Очищаем список messages перед загрузкой новых данных из файла
					  messages->Clear();

					  // Считываем каждую строку из файла и добавляем в список messages
					  String^ line;
					  while ((line = reader->ReadLine()) != nullptr)
					  {
						  messages->Add(line);
					  }

					  // Закрываем поток
					  reader->Close();
				  }
			  }

				private: void SaveMessagesToFile()
				{
					// Получение пути к папке, в которой выполняется приложение
					String^ folderPath = System::Windows::Forms::Application::StartupPath;

					// Формируем путь к файлу
					String^ filePath = System::IO::Path::Combine(folderPath, "messages.txt");

					// Открываем поток для записи данных в файл
					System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath);

					// Записываем каждое сообщение в файл
					for (int i = 0; i < messages->Count; i++) {
						writer->WriteLine(messages[i]); // WriteLine добавляет символ новой строки
					}

					// Закрываем поток
					writer->Close();
				}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	
	
		UpdateRichTextBox(); // 
		LoadMessagesFromFile();

	
	

	listBox1->Items->Clear();
	
	// Получение пути к папке, в которой выполняется приложение
	String^ folderPath = System::Windows::Forms::Application::StartupPath;

	// Открытие потока для чтения содержимого папки
	std::string folderPathStr = msclr::interop::marshal_as<std::string>(folderPath);
	std::vector<std::string> filenames;
	for (const auto& entry : std::filesystem::directory_iterator(folderPathStr)) {
		// Получение имени файла
		std::string filename = entry.path().filename().string();

		// Проверка расширения файла
		if (filename.size() > 4 && filename.substr(filename.size() - 4) == ".txt") {
			// Удаление расширения из имени файла
			filename = filename.substr(0, filename.size() - 4);

			// Добавление имени файла в вектор
			filenames.push_back(filename);
		}
	}

	// Сортировка имен файлов
	std::sort(filenames.begin(), filenames.end());

	// Добавление имен файлов в ListBox1
	for (const auto& filename : filenames) {
		// Пропускаем файл messages.txt
		if (filename != "messages")
		{
			String^ filenameStr = gcnew String(filename.c_str());
			listBox1->Items->Add(filenameStr);
		}
	}





}



private: void UpdateRichTextBox()
{
	richTextBox1->Text = ""; // Очищаем содержимое richTextBox1 перед обновлением

	// Добавляем каждое сообщение в отдельной строке
	for (int i = 0; i < messages->Count; i++) {
		richTextBox1->AppendText(messages[i] + "\n"); // Добавляем символ новой строки
	}
}








private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->Visible = true;
	richTextBox1->Visible = true;
	textBox1->Visible = true;

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		String^ text = textBox1->Text;
		messages->Add(text); // Добавляем сообщение в список
		UpdateRichTextBox(); // Вызываем функцию для обновления richTextBox1
		textBox1->Clear();

		// Сохраняем данные в файл messages.txt
		SaveMessagesToFile();

		// Отладочный вывод
		MessageBox::Show("Сообщение добавлено в список: " + text);
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	UpdateRichTextBox(); 
	LoadMessagesFromFile();


}
};
}
