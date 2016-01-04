namespace GUI_FORM 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent(); 
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  exitButton;
	protected:

	private:
		/// Variabile di progettazione necessaria.
		System::ComponentModel::Container ^components;

		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			
			// exitButton
			resources->ApplyResources(this->exitButton, L"exitButton");
			this->exitButton->Name = L"exitButton";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &MyForm::exitButton_Click);
			
			// MyForm
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->exitButton);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
		}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {}

	private: System::Void exitButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Application::Exit();
	}

	};
}
