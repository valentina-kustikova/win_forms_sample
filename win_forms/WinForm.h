#pragma once

#include <Windows.h>
#include <stdio.h>
#include <vcclr.h>
#include <fstream>
#include <string>

namespace win_forms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^  buttonCreateProcess;
    protected: 
    private: System::Windows::Forms::TextBox^  textBoxInput;
    private: System::Windows::Forms::Label^  labelInput;
    private: System::Windows::Forms::TextBox^  textBoxOutput;
    private: System::Windows::Forms::TextBox^  textBoxConvert2Int;
    private: System::Windows::Forms::Button^  buttonConvert2Int;
    private: System::Windows::Forms::Label^  labelConvertInt;
    private: System::Windows::Forms::Label^  labelConvertFloat;
    private: System::Windows::Forms::TextBox^  textBoxConvert2Float;
    private: System::Windows::Forms::Button^  buttonConvert2Float;

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
            this->buttonCreateProcess = (gcnew System::Windows::Forms::Button());
            this->textBoxInput = (gcnew System::Windows::Forms::TextBox());
            this->labelInput = (gcnew System::Windows::Forms::Label());
            this->textBoxOutput = (gcnew System::Windows::Forms::TextBox());
            this->textBoxConvert2Int = (gcnew System::Windows::Forms::TextBox());
            this->buttonConvert2Int = (gcnew System::Windows::Forms::Button());
            this->labelConvertInt = (gcnew System::Windows::Forms::Label());
            this->labelConvertFloat = (gcnew System::Windows::Forms::Label());
            this->textBoxConvert2Float = (gcnew System::Windows::Forms::TextBox());
            this->buttonConvert2Float = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // buttonCreateProcess
            // 
            this->buttonCreateProcess->Location = System::Drawing::Point(15, 58);
            this->buttonCreateProcess->Name = L"buttonCreateProcess";
            this->buttonCreateProcess->Size = System::Drawing::Size(380, 23);
            this->buttonCreateProcess->TabIndex = 0;
            this->buttonCreateProcess->Text = L"Запустить процесс";
            this->buttonCreateProcess->UseVisualStyleBackColor = true;
            this->buttonCreateProcess->Click += gcnew System::EventHandler(this, &Form1::buttonCreateProcess_Click);
            // 
            // textBoxInput
            // 
            this->textBoxInput->Location = System::Drawing::Point(15, 23);
            this->textBoxInput->Name = L"textBoxInput";
            this->textBoxInput->Size = System::Drawing::Size(380, 20);
            this->textBoxInput->TabIndex = 1;
            // 
            // labelInput
            // 
            this->labelInput->AutoSize = true;
            this->labelInput->Location = System::Drawing::Point(12, 7);
            this->labelInput->Name = L"labelInput";
            this->labelInput->Size = System::Drawing::Size(271, 13);
            this->labelInput->TabIndex = 2;
            this->labelInput->Text = L"Введите название файла для обмена сообщениями";
            // 
            // textBoxOutput
            // 
            this->textBoxOutput->Location = System::Drawing::Point(15, 98);
            this->textBoxOutput->Name = L"textBoxOutput";
            this->textBoxOutput->Size = System::Drawing::Size(380, 20);
            this->textBoxOutput->TabIndex = 3;
            // 
            // textBoxConvert2Int
            // 
            this->textBoxConvert2Int->Location = System::Drawing::Point(15, 199);
            this->textBoxConvert2Int->Name = L"textBoxConvert2Int";
            this->textBoxConvert2Int->Size = System::Drawing::Size(380, 20);
            this->textBoxConvert2Int->TabIndex = 4;
            // 
            // buttonConvert2Int
            // 
            this->buttonConvert2Int->Location = System::Drawing::Point(15, 239);
            this->buttonConvert2Int->Name = L"buttonConvert2Int";
            this->buttonConvert2Int->Size = System::Drawing::Size(380, 23);
            this->buttonConvert2Int->TabIndex = 5;
            this->buttonConvert2Int->Text = L"Конвертировать строку в целое число";
            this->buttonConvert2Int->UseVisualStyleBackColor = true;
            this->buttonConvert2Int->Click += gcnew System::EventHandler(this, &Form1::buttonConvert2Int_Click);
            // 
            // labelConvertInt
            // 
            this->labelConvertInt->AutoSize = true;
            this->labelConvertInt->Location = System::Drawing::Point(15, 180);
            this->labelConvertInt->Name = L"labelConvertInt";
            this->labelConvertInt->Size = System::Drawing::Size(203, 13);
            this->labelConvertInt->TabIndex = 6;
            this->labelConvertInt->Text = L"Введите целое число для конвертации";
            // 
            // labelConvertFloat
            // 
            this->labelConvertFloat->AutoSize = true;
            this->labelConvertFloat->Location = System::Drawing::Point(18, 350);
            this->labelConvertFloat->Name = L"labelConvertFloat";
            this->labelConvertFloat->Size = System::Drawing::Size(247, 13);
            this->labelConvertFloat->TabIndex = 7;
            this->labelConvertFloat->Text = L"Введите вещественное число для конвертации";
            // 
            // textBoxConvert2Float
            // 
            this->textBoxConvert2Float->Location = System::Drawing::Point(21, 367);
            this->textBoxConvert2Float->Name = L"textBoxConvert2Float";
            this->textBoxConvert2Float->Size = System::Drawing::Size(374, 20);
            this->textBoxConvert2Float->TabIndex = 8;
            // 
            // buttonConvert2Float
            // 
            this->buttonConvert2Float->Location = System::Drawing::Point(21, 407);
            this->buttonConvert2Float->Name = L"buttonConvert2Float";
            this->buttonConvert2Float->Size = System::Drawing::Size(374, 23);
            this->buttonConvert2Float->TabIndex = 9;
            this->buttonConvert2Float->Text = L"Конвертировать строку в вещественное число";
            this->buttonConvert2Float->UseVisualStyleBackColor = true;
            this->buttonConvert2Float->Click += gcnew System::EventHandler(this, &Form1::buttonConvert2Float_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(407, 447);
            this->Controls->Add(this->buttonConvert2Float);
            this->Controls->Add(this->textBoxConvert2Float);
            this->Controls->Add(this->labelConvertFloat);
            this->Controls->Add(this->labelConvertInt);
            this->Controls->Add(this->buttonConvert2Int);
            this->Controls->Add(this->textBoxConvert2Int);
            this->Controls->Add(this->textBoxOutput);
            this->Controls->Add(this->labelInput);
            this->Controls->Add(this->textBoxInput);
            this->Controls->Add(this->buttonCreateProcess);
            this->Name = L"Form1";
            this->Text = L"Пример вызова процесса";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    
    
    private: System::Void buttonCreateProcess_Click(System::Object^  sender, System::EventArgs^  e)
        {          
            if (String::IsNullOrEmpty(textBoxInput->Text))
            {
                MessageBox::Show("Empty line!");
                return;
            }
            CreateChildProcess();
            ReadStdout();
        }
    


    private: void CreateChildProcess()
        {
            STARTUPINFO si;
            PROCESS_INFORMATION pi;

            ZeroMemory(&si, sizeof(si));
            si.cb = sizeof(si);
            ZeroMemory(&pi, sizeof(pi));

            // Executable file name
            const WCHAR pathToExec[] = L"console.exe";
            // Variable for storing full executable command line
            WCHAR fullCommandLine[MAX_PATH] = {0};
            // Convert 'System::String^' to 'wchar_t *'
            wchar_t *argPtr = (wchar_t *)Marshal::StringToHGlobalUni(textBoxInput->Text).ToPointer();
            // Create command line
            swprintf_s(fullCommandLine, L"\"%s\" \"%s\"", pathToExec, argPtr);
            // Create process and check its existence
            if (CreateProcess(
                0,               // Execute process using cmd.exe
                fullCommandLine, // Command line
                0,               // Process handle not inheritable
                0,               // Thread handle not inheritable
                TRUE,            // Set handle inheritance to FALSE
                CREATE_NO_WINDOW,// No creation flags
                0,               // Use parent's environment block
                0,               // Use parent's starting directory 
                &si,             // Pointer to STARTUPINFO structure
                &pi)             // Pointer to PROCESS_INFORMATION structure
                == 0)            // If the function succeeds, the return value is nonzero.
            {
                // Free allocated memory for storing 'argPtr'
                Marshal::FreeHGlobal(IntPtr(argPtr));
                // Put into output text box error code
                textBoxOutput->Text = "CreateProcess failed " + GetLastError() + ".\n";
                return;
            }
            // Free allocated memory for storing 'argPtr'
            Marshal::FreeHGlobal(IntPtr(argPtr));

            // Wait until child process exits
            WaitForSingleObject(pi.hProcess, INFINITE);

            // Close process and thread handles
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);
        }


    private: void ReadStdout()
        {
            // Convert 'System::String^' to 'wchar_t *'
            wchar_t *fileName = (wchar_t *)Marshal::StringToHGlobalUni(textBoxInput->Text).ToPointer();
            // Open file to read info
            std::ifstream file;
            file.open(fileName);
            if (!file.is_open())
            {
                MessageBox::Show("File not found!");
                return;
            }
            std::string line;
            getline(file, line);
            // Put read info into output text box
            textBoxOutput->Text = gcnew String(line.c_str());
            file.close();
        }

    private: System::Void buttonConvert2Int_Click(System::Object^  sender, System::EventArgs^  e)
             {
                 try
                 {
                     int number = int::Parse(textBoxConvert2Int->Text);
                     textBoxOutput->Text = number.ToString();
                 }
                 catch(...)
                 {
                     MessageBox::Show("Incorrect input value!");
                     textBoxConvert2Int->Text = String::Empty;
                 }
             }
    
    private: System::Void buttonConvert2Float_Click(System::Object^  sender, System::EventArgs^  e)
             {
                 try
                 {
                     // Dot or comma is used for float values!
                     float number = float::Parse(textBoxConvert2Float->Text);
                     textBoxOutput->Text = number.ToString();
                 }
                 catch(...)
                 {
                     MessageBox::Show("Incorrect input value!");
                     textBoxConvert2Float->Text = String::Empty;
                 }
             }
};    
}

