#pragma once

namespace RevitAddin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm()
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
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonGetElCat;
	protected:


	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;

	protected:

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
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonGetElCat = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(210, 220);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(60, 30);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// buttonGetElCat
			// 
			this->buttonGetElCat->Location = System::Drawing::Point(10, 220);
			this->buttonGetElCat->Name = L"buttonGetElCat";
			this->buttonGetElCat->Size = System::Drawing::Size(180, 30);
			this->buttonGetElCat->TabIndex = 1;
			this->buttonGetElCat->Text = L"Get Element Categories";
			this->buttonGetElCat->UseVisualStyleBackColor = true;
			this->buttonGetElCat->Click += gcnew System::EventHandler(this, &MyForm::buttonGetElCat_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Category 1", L"Category 2" });
			this->checkedListBox1->Location = System::Drawing::Point(10, 10);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(260, 199);
			this->checkedListBox1->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(280, 260);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->buttonGetElCat);
			this->Controls->Add(this->buttonExit);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonGetElCat_Click(System::Object^ sender, System::EventArgs^ e) {
		//-----My code Must Be here----
		//checkedListBox1->Items[1] = RevitAddin::ExtCmd::CachedDoc->PathName;
		//checkedListBox1->Items[0] = ExtCmd ->yol;
		checkedListBox1->Items[1] = "iki";
	}
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}