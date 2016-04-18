#pragma once

namespace TestProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^  txtInput;
	protected: 


	private: System::Windows::Forms::TabPage^  tabArea;
	private: System::Windows::Forms::GroupBox^  grpAreaOut;
	private: System::Windows::Forms::RadioButton^  rbSquaredMetersOut;
	private: System::Windows::Forms::RadioButton^  rbAcresOut;
	private: System::Windows::Forms::RadioButton^  rbSquaredInchesOut;
	private: System::Windows::Forms::GroupBox^  grpAreaIn;
	private: System::Windows::Forms::RadioButton^  rbSquaredMetersIn;
	private: System::Windows::Forms::RadioButton^  rbAcresIn;

	private: System::Windows::Forms::RadioButton^  rbSquaredInchesIn;
	private: System::Windows::Forms::TabPage^  tabVolume;
	private: System::Windows::Forms::RadioButton^  rbCubicInchesOut;
	private: System::Windows::Forms::RadioButton^  rbCubicInchesIn;
	private: System::Windows::Forms::RadioButton^  rbLitersOut;

	private: System::Windows::Forms::RadioButton^  rbGallonsOut;
	private: System::Windows::Forms::RadioButton^  rbLitersIn;
	private: System::Windows::Forms::RadioButton^  rbGallonsIn;
	private: System::Windows::Forms::TabPage^  tabMass;
	private: System::Windows::Forms::RadioButton^  rbPoundsOut;
	private: System::Windows::Forms::RadioButton^  rbTonsOut;
	private: System::Windows::Forms::RadioButton^  rbKilogramsOut;
	private: System::Windows::Forms::RadioButton^  rbPoundsIn;
	private: System::Windows::Forms::RadioButton^  rbTonsIn;
	private: System::Windows::Forms::RadioButton^  rbKilogramsIn;
	private: System::Windows::Forms::TabPage^  tabLength;
	private: System::Windows::Forms::RadioButton^  rbMilesOut;
	private: System::Windows::Forms::RadioButton^  rbYardsOut;
	private: System::Windows::Forms::RadioButton^  rbMilesIn;
	private: System::Windows::Forms::RadioButton^  rbYardsIn;
	private: System::Windows::Forms::RadioButton^  rbFeetOut;
	private: System::Windows::Forms::RadioButton^  rbInchesOut;
	private: System::Windows::Forms::RadioButton^  rbMetersOut;
	private: System::Windows::Forms::RadioButton^  rbFeetIn;
	private: System::Windows::Forms::RadioButton^  rbInchesIn;
	private: System::Windows::Forms::RadioButton^  rbMetersIn;
	private: System::Windows::Forms::TabPage^  tabTemperature;
	private: System::Windows::Forms::RadioButton^  rbKelvinOut;
	private: System::Windows::Forms::RadioButton^  rbFahrenheitOut;
	private: System::Windows::Forms::RadioButton^  rbCelciusOut;
	private: System::Windows::Forms::RadioButton^  rbKelvinIn;
	private: System::Windows::Forms::RadioButton^  rbFahrenheitIn;
	private: System::Windows::Forms::RadioButton^  rbCelciusIn;

	private: System::Windows::Forms::GroupBox^  grpLengthIn;
	private: System::Windows::Forms::GroupBox^  grpVolumeIn;
	private: System::Windows::Forms::GroupBox^  grpVolumeOut;



	private: System::Windows::Forms::GroupBox^  grpMassIn;
	private: System::Windows::Forms::GroupBox^  grpMassOut;


	private: System::Windows::Forms::GroupBox^  grpLenghtOut;

	private: System::Windows::Forms::GroupBox^  grpTemperatureOut;

	private: System::Windows::Forms::GroupBox^  grpTemperatureIn;
	private: System::Windows::Forms::TabControl^  tabUnits;
	private: System::Windows::Forms::Label^  lblInstructions;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtOutput;

	private: System::Windows::Forms::Button^  btnConvert;

	protected: 


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		//Program variables
		// here we declare all the variables required for the program
	private:
		double InputValue;
		int InputType;
		double OutputValue;
		int UnitType;
		int Unit;
		double MiddleValue;
		int OutputType;
		int InputClass;
		int TmpSwapIn;
		int TmpSwapOut;

private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  convertToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
private: System::Windows::Forms::Button^  btnSwap;

		 int OutputClass;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
;		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->tabArea = (gcnew System::Windows::Forms::TabPage());
			this->grpAreaOut = (gcnew System::Windows::Forms::GroupBox());
			this->rbSquaredMetersOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbAcresOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbSquaredInchesOut = (gcnew System::Windows::Forms::RadioButton());
			this->grpAreaIn = (gcnew System::Windows::Forms::GroupBox());
			this->rbSquaredMetersIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbAcresIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbSquaredInchesIn = (gcnew System::Windows::Forms::RadioButton());
			this->tabVolume = (gcnew System::Windows::Forms::TabPage());
			this->grpVolumeOut = (gcnew System::Windows::Forms::GroupBox());
			this->rbLitersOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbGallonsOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbCubicInchesOut = (gcnew System::Windows::Forms::RadioButton());
			this->grpVolumeIn = (gcnew System::Windows::Forms::GroupBox());
			this->rbLitersIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbGallonsIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbCubicInchesIn = (gcnew System::Windows::Forms::RadioButton());
			this->tabMass = (gcnew System::Windows::Forms::TabPage());
			this->grpMassOut = (gcnew System::Windows::Forms::GroupBox());
			this->rbKilogramsOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbTonsOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbPoundsOut = (gcnew System::Windows::Forms::RadioButton());
			this->grpMassIn = (gcnew System::Windows::Forms::GroupBox());
			this->rbKilogramsIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbTonsIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbPoundsIn = (gcnew System::Windows::Forms::RadioButton());
			this->tabLength = (gcnew System::Windows::Forms::TabPage());
			this->grpLenghtOut = (gcnew System::Windows::Forms::GroupBox());
			this->rbMetersOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbInchesOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbMilesOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbFeetOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbYardsOut = (gcnew System::Windows::Forms::RadioButton());
			this->grpLengthIn = (gcnew System::Windows::Forms::GroupBox());
			this->rbMetersIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbInchesIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbFeetIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbMilesIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbYardsIn = (gcnew System::Windows::Forms::RadioButton());
			this->tabTemperature = (gcnew System::Windows::Forms::TabPage());
			this->grpTemperatureOut = (gcnew System::Windows::Forms::GroupBox());
			this->rbCelciusOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbFahrenheitOut = (gcnew System::Windows::Forms::RadioButton());
			this->rbKelvinOut = (gcnew System::Windows::Forms::RadioButton());
			this->grpTemperatureIn = (gcnew System::Windows::Forms::GroupBox());
			this->rbCelciusIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbFahrenheitIn = (gcnew System::Windows::Forms::RadioButton());
			this->rbKelvinIn = (gcnew System::Windows::Forms::RadioButton());
			this->tabUnits = (gcnew System::Windows::Forms::TabControl());
			this->lblInstructions = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnSwap = (gcnew System::Windows::Forms::Button());
			this->tabArea->SuspendLayout();
			this->grpAreaOut->SuspendLayout();
			this->grpAreaIn->SuspendLayout();
			this->tabVolume->SuspendLayout();
			this->grpVolumeOut->SuspendLayout();
			this->grpVolumeIn->SuspendLayout();
			this->tabMass->SuspendLayout();
			this->grpMassOut->SuspendLayout();
			this->grpMassIn->SuspendLayout();
			this->tabLength->SuspendLayout();
			this->grpLenghtOut->SuspendLayout();
			this->grpLengthIn->SuspendLayout();
			this->tabTemperature->SuspendLayout();
			this->grpTemperatureOut->SuspendLayout();
			this->grpTemperatureIn->SuspendLayout();
			this->tabUnits->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtInput
			// 
			resources->ApplyResources(this->txtInput, L"txtInput");
			this->txtInput->Name = L"txtInput";
			this->txtInput->Click += gcnew System::EventHandler(this, &Form1::txtInput_Click);
			this->txtInput->TextChanged += gcnew System::EventHandler(this, &Form1::txtInput_TextChanged);
			// 
			// tabArea
			// 
			this->tabArea->Controls->Add(this->grpAreaOut);
			this->tabArea->Controls->Add(this->grpAreaIn);
			resources->ApplyResources(this->tabArea, L"tabArea");
			this->tabArea->Name = L"tabArea";
			this->tabArea->UseVisualStyleBackColor = true;
			// 
			// grpAreaOut
			// 
			this->grpAreaOut->Controls->Add(this->rbSquaredMetersOut);
			this->grpAreaOut->Controls->Add(this->rbAcresOut);
			this->grpAreaOut->Controls->Add(this->rbSquaredInchesOut);
			resources->ApplyResources(this->grpAreaOut, L"grpAreaOut");
			this->grpAreaOut->Name = L"grpAreaOut";
			this->grpAreaOut->TabStop = false;
			// 
			// rbSquaredMetersOut
			// 
			resources->ApplyResources(this->rbSquaredMetersOut, L"rbSquaredMetersOut");
			this->rbSquaredMetersOut->Name = L"rbSquaredMetersOut";
			this->rbSquaredMetersOut->TabStop = true;
			this->rbSquaredMetersOut->UseVisualStyleBackColor = true;
			this->rbSquaredMetersOut->Click += gcnew System::EventHandler(this, &Form1::rbSquaredMetersOut_Click);
			// 
			// rbAcresOut
			// 
			resources->ApplyResources(this->rbAcresOut, L"rbAcresOut");
			this->rbAcresOut->Name = L"rbAcresOut";
			this->rbAcresOut->TabStop = true;
			this->rbAcresOut->UseVisualStyleBackColor = true;
			this->rbAcresOut->Click += gcnew System::EventHandler(this, &Form1::rbAcresOut_Click);
			// 
			// rbSquaredInchesOut
			// 
			resources->ApplyResources(this->rbSquaredInchesOut, L"rbSquaredInchesOut");
			this->rbSquaredInchesOut->Name = L"rbSquaredInchesOut";
			this->rbSquaredInchesOut->UseVisualStyleBackColor = true;
			this->rbSquaredInchesOut->Click += gcnew System::EventHandler(this, &Form1::rbSquaredInchesOut_Click);
			// 
			// grpAreaIn
			// 
			this->grpAreaIn->Controls->Add(this->rbSquaredMetersIn);
			this->grpAreaIn->Controls->Add(this->rbAcresIn);
			this->grpAreaIn->Controls->Add(this->rbSquaredInchesIn);
			resources->ApplyResources(this->grpAreaIn, L"grpAreaIn");
			this->grpAreaIn->Name = L"grpAreaIn";
			this->grpAreaIn->TabStop = false;
			// 
			// rbSquaredMetersIn
			// 
			resources->ApplyResources(this->rbSquaredMetersIn, L"rbSquaredMetersIn");
			this->rbSquaredMetersIn->Name = L"rbSquaredMetersIn";
			this->rbSquaredMetersIn->TabStop = true;
			this->rbSquaredMetersIn->UseVisualStyleBackColor = true;
			this->rbSquaredMetersIn->Click += gcnew System::EventHandler(this, &Form1::rbSquaredMetersIn_Click);
			// 
			// rbAcresIn
			// 
			resources->ApplyResources(this->rbAcresIn, L"rbAcresIn");
			this->rbAcresIn->Name = L"rbAcresIn";
			this->rbAcresIn->TabStop = true;
			this->rbAcresIn->UseVisualStyleBackColor = true;
			this->rbAcresIn->Click += gcnew System::EventHandler(this, &Form1::rbAcresIn_Click);
			// 
			// rbSquaredInchesIn
			// 
			resources->ApplyResources(this->rbSquaredInchesIn, L"rbSquaredInchesIn");
			this->rbSquaredInchesIn->Name = L"rbSquaredInchesIn";
			this->rbSquaredInchesIn->UseVisualStyleBackColor = true;
			this->rbSquaredInchesIn->Click += gcnew System::EventHandler(this, &Form1::rbSquaredInchesIn_Click);
			// 
			// tabVolume
			// 
			this->tabVolume->Controls->Add(this->grpVolumeOut);
			this->tabVolume->Controls->Add(this->grpVolumeIn);
			resources->ApplyResources(this->tabVolume, L"tabVolume");
			this->tabVolume->Name = L"tabVolume";
			this->tabVolume->UseVisualStyleBackColor = true;
			// 
			// grpVolumeOut
			// 
			this->grpVolumeOut->Controls->Add(this->rbLitersOut);
			this->grpVolumeOut->Controls->Add(this->rbGallonsOut);
			this->grpVolumeOut->Controls->Add(this->rbCubicInchesOut);
			resources->ApplyResources(this->grpVolumeOut, L"grpVolumeOut");
			this->grpVolumeOut->Name = L"grpVolumeOut";
			this->grpVolumeOut->TabStop = false;
			// 
			// rbLitersOut
			// 
			resources->ApplyResources(this->rbLitersOut, L"rbLitersOut");
			this->rbLitersOut->Name = L"rbLitersOut";
			this->rbLitersOut->TabStop = true;
			this->rbLitersOut->UseVisualStyleBackColor = true;
			this->rbLitersOut->Click += gcnew System::EventHandler(this, &Form1::rbLitersOut_Click);
			// 
			// rbGallonsOut
			// 
			resources->ApplyResources(this->rbGallonsOut, L"rbGallonsOut");
			this->rbGallonsOut->Name = L"rbGallonsOut";
			this->rbGallonsOut->TabStop = true;
			this->rbGallonsOut->UseVisualStyleBackColor = true;
			this->rbGallonsOut->Click += gcnew System::EventHandler(this, &Form1::rbGallonsOut_Click);
			// 
			// rbCubicInchesOut
			// 
			resources->ApplyResources(this->rbCubicInchesOut, L"rbCubicInchesOut");
			this->rbCubicInchesOut->Name = L"rbCubicInchesOut";
			this->rbCubicInchesOut->TabStop = true;
			this->rbCubicInchesOut->UseVisualStyleBackColor = true;
			this->rbCubicInchesOut->Click += gcnew System::EventHandler(this, &Form1::rbCubicInchesOut_Click);
			// 
			// grpVolumeIn
			// 
			this->grpVolumeIn->Controls->Add(this->rbLitersIn);
			this->grpVolumeIn->Controls->Add(this->rbGallonsIn);
			this->grpVolumeIn->Controls->Add(this->rbCubicInchesIn);
			resources->ApplyResources(this->grpVolumeIn, L"grpVolumeIn");
			this->grpVolumeIn->Name = L"grpVolumeIn";
			this->grpVolumeIn->TabStop = false;
			// 
			// rbLitersIn
			// 
			resources->ApplyResources(this->rbLitersIn, L"rbLitersIn");
			this->rbLitersIn->Name = L"rbLitersIn";
			this->rbLitersIn->TabStop = true;
			this->rbLitersIn->UseVisualStyleBackColor = true;
			this->rbLitersIn->Click += gcnew System::EventHandler(this, &Form1::rbLitersIn_Click);
			// 
			// rbGallonsIn
			// 
			resources->ApplyResources(this->rbGallonsIn, L"rbGallonsIn");
			this->rbGallonsIn->Name = L"rbGallonsIn";
			this->rbGallonsIn->TabStop = true;
			this->rbGallonsIn->UseVisualStyleBackColor = true;
			this->rbGallonsIn->Click += gcnew System::EventHandler(this, &Form1::rbGallonsIn_Click);
			// 
			// rbCubicInchesIn
			// 
			resources->ApplyResources(this->rbCubicInchesIn, L"rbCubicInchesIn");
			this->rbCubicInchesIn->Name = L"rbCubicInchesIn";
			this->rbCubicInchesIn->TabStop = true;
			this->rbCubicInchesIn->UseVisualStyleBackColor = true;
			this->rbCubicInchesIn->Click += gcnew System::EventHandler(this, &Form1::rbCubicInchesIn_Click);
			// 
			// tabMass
			// 
			this->tabMass->Controls->Add(this->grpMassOut);
			this->tabMass->Controls->Add(this->grpMassIn);
			resources->ApplyResources(this->tabMass, L"tabMass");
			this->tabMass->Name = L"tabMass";
			this->tabMass->UseVisualStyleBackColor = true;
			// 
			// grpMassOut
			// 
			this->grpMassOut->Controls->Add(this->rbKilogramsOut);
			this->grpMassOut->Controls->Add(this->rbTonsOut);
			this->grpMassOut->Controls->Add(this->rbPoundsOut);
			resources->ApplyResources(this->grpMassOut, L"grpMassOut");
			this->grpMassOut->Name = L"grpMassOut";
			this->grpMassOut->TabStop = false;
			// 
			// rbKilogramsOut
			// 
			resources->ApplyResources(this->rbKilogramsOut, L"rbKilogramsOut");
			this->rbKilogramsOut->Name = L"rbKilogramsOut";
			this->rbKilogramsOut->TabStop = true;
			this->rbKilogramsOut->UseVisualStyleBackColor = true;
			this->rbKilogramsOut->Click += gcnew System::EventHandler(this, &Form1::rbKilogramsOut_Click);
			// 
			// rbTonsOut
			// 
			resources->ApplyResources(this->rbTonsOut, L"rbTonsOut");
			this->rbTonsOut->Name = L"rbTonsOut";
			this->rbTonsOut->TabStop = true;
			this->rbTonsOut->UseVisualStyleBackColor = true;
			this->rbTonsOut->Click += gcnew System::EventHandler(this, &Form1::rbTonsOut_Click);
			// 
			// rbPoundsOut
			// 
			resources->ApplyResources(this->rbPoundsOut, L"rbPoundsOut");
			this->rbPoundsOut->Name = L"rbPoundsOut";
			this->rbPoundsOut->TabStop = true;
			this->rbPoundsOut->UseVisualStyleBackColor = true;
			this->rbPoundsOut->Click += gcnew System::EventHandler(this, &Form1::rbPoundsOut_Click);
			// 
			// grpMassIn
			// 
			this->grpMassIn->Controls->Add(this->rbKilogramsIn);
			this->grpMassIn->Controls->Add(this->rbTonsIn);
			this->grpMassIn->Controls->Add(this->rbPoundsIn);
			resources->ApplyResources(this->grpMassIn, L"grpMassIn");
			this->grpMassIn->Name = L"grpMassIn";
			this->grpMassIn->TabStop = false;
			// 
			// rbKilogramsIn
			// 
			resources->ApplyResources(this->rbKilogramsIn, L"rbKilogramsIn");
			this->rbKilogramsIn->Name = L"rbKilogramsIn";
			this->rbKilogramsIn->TabStop = true;
			this->rbKilogramsIn->UseVisualStyleBackColor = true;
			this->rbKilogramsIn->Click += gcnew System::EventHandler(this, &Form1::rbKilogramsIn_Click);
			// 
			// rbTonsIn
			// 
			resources->ApplyResources(this->rbTonsIn, L"rbTonsIn");
			this->rbTonsIn->Name = L"rbTonsIn";
			this->rbTonsIn->TabStop = true;
			this->rbTonsIn->UseVisualStyleBackColor = true;
			this->rbTonsIn->Click += gcnew System::EventHandler(this, &Form1::rbTonsIn_Click);
			// 
			// rbPoundsIn
			// 
			resources->ApplyResources(this->rbPoundsIn, L"rbPoundsIn");
			this->rbPoundsIn->Name = L"rbPoundsIn";
			this->rbPoundsIn->TabStop = true;
			this->rbPoundsIn->UseVisualStyleBackColor = true;
			this->rbPoundsIn->Click += gcnew System::EventHandler(this, &Form1::rbPoundsIn_Click);
			// 
			// tabLength
			// 
			this->tabLength->Controls->Add(this->grpLenghtOut);
			this->tabLength->Controls->Add(this->grpLengthIn);
			resources->ApplyResources(this->tabLength, L"tabLength");
			this->tabLength->Name = L"tabLength";
			this->tabLength->UseVisualStyleBackColor = true;
			// 
			// grpLenghtOut
			// 
			this->grpLenghtOut->Controls->Add(this->rbMetersOut);
			this->grpLenghtOut->Controls->Add(this->rbInchesOut);
			this->grpLenghtOut->Controls->Add(this->rbMilesOut);
			this->grpLenghtOut->Controls->Add(this->rbFeetOut);
			this->grpLenghtOut->Controls->Add(this->rbYardsOut);
			resources->ApplyResources(this->grpLenghtOut, L"grpLenghtOut");
			this->grpLenghtOut->Name = L"grpLenghtOut";
			this->grpLenghtOut->TabStop = false;
			// 
			// rbMetersOut
			// 
			resources->ApplyResources(this->rbMetersOut, L"rbMetersOut");
			this->rbMetersOut->Name = L"rbMetersOut";
			this->rbMetersOut->UseVisualStyleBackColor = true;
			this->rbMetersOut->Click += gcnew System::EventHandler(this, &Form1::rbMetersOut_Click);
			// 
			// rbInchesOut
			// 
			resources->ApplyResources(this->rbInchesOut, L"rbInchesOut");
			this->rbInchesOut->Name = L"rbInchesOut";
			this->rbInchesOut->UseVisualStyleBackColor = true;
			this->rbInchesOut->Click += gcnew System::EventHandler(this, &Form1::rbInchesOut_Click);
			// 
			// rbMilesOut
			// 
			resources->ApplyResources(this->rbMilesOut, L"rbMilesOut");
			this->rbMilesOut->Name = L"rbMilesOut";
			this->rbMilesOut->UseVisualStyleBackColor = true;
			this->rbMilesOut->Click += gcnew System::EventHandler(this, &Form1::rbMilesOut_Click);
			// 
			// rbFeetOut
			// 
			resources->ApplyResources(this->rbFeetOut, L"rbFeetOut");
			this->rbFeetOut->Name = L"rbFeetOut";
			this->rbFeetOut->UseVisualStyleBackColor = true;
			this->rbFeetOut->Click += gcnew System::EventHandler(this, &Form1::rbFeetOut_Click);
			// 
			// rbYardsOut
			// 
			resources->ApplyResources(this->rbYardsOut, L"rbYardsOut");
			this->rbYardsOut->Name = L"rbYardsOut";
			this->rbYardsOut->UseVisualStyleBackColor = true;
			this->rbYardsOut->Click += gcnew System::EventHandler(this, &Form1::rbYardsOut_Click);
			// 
			// grpLengthIn
			// 
			this->grpLengthIn->Controls->Add(this->rbMetersIn);
			this->grpLengthIn->Controls->Add(this->rbInchesIn);
			this->grpLengthIn->Controls->Add(this->rbFeetIn);
			this->grpLengthIn->Controls->Add(this->rbMilesIn);
			this->grpLengthIn->Controls->Add(this->rbYardsIn);
			resources->ApplyResources(this->grpLengthIn, L"grpLengthIn");
			this->grpLengthIn->Name = L"grpLengthIn";
			this->grpLengthIn->TabStop = false;
			// 
			// rbMetersIn
			// 
			resources->ApplyResources(this->rbMetersIn, L"rbMetersIn");
			this->rbMetersIn->Name = L"rbMetersIn";
			this->rbMetersIn->UseVisualStyleBackColor = true;
			this->rbMetersIn->Click += gcnew System::EventHandler(this, &Form1::rbMetersIn_Click);
			// 
			// rbInchesIn
			// 
			resources->ApplyResources(this->rbInchesIn, L"rbInchesIn");
			this->rbInchesIn->Name = L"rbInchesIn";
			this->rbInchesIn->UseVisualStyleBackColor = true;
			this->rbInchesIn->Click += gcnew System::EventHandler(this, &Form1::rbInchesIn_Click);
			// 
			// rbFeetIn
			// 
			resources->ApplyResources(this->rbFeetIn, L"rbFeetIn");
			this->rbFeetIn->Name = L"rbFeetIn";
			this->rbFeetIn->UseVisualStyleBackColor = true;
			this->rbFeetIn->Click += gcnew System::EventHandler(this, &Form1::rbFeetIn_Click);
			// 
			// rbMilesIn
			// 
			resources->ApplyResources(this->rbMilesIn, L"rbMilesIn");
			this->rbMilesIn->Name = L"rbMilesIn";
			this->rbMilesIn->UseVisualStyleBackColor = true;
			this->rbMilesIn->Click += gcnew System::EventHandler(this, &Form1::rbMilesIn_Click);
			// 
			// rbYardsIn
			// 
			resources->ApplyResources(this->rbYardsIn, L"rbYardsIn");
			this->rbYardsIn->Name = L"rbYardsIn";
			this->rbYardsIn->UseVisualStyleBackColor = true;
			this->rbYardsIn->Click += gcnew System::EventHandler(this, &Form1::rbYardsIn_Click);
			// 
			// tabTemperature
			// 
			this->tabTemperature->Controls->Add(this->grpTemperatureOut);
			this->tabTemperature->Controls->Add(this->grpTemperatureIn);
			resources->ApplyResources(this->tabTemperature, L"tabTemperature");
			this->tabTemperature->Name = L"tabTemperature";
			this->tabTemperature->UseVisualStyleBackColor = true;
			// 
			// grpTemperatureOut
			// 
			this->grpTemperatureOut->Controls->Add(this->rbCelciusOut);
			this->grpTemperatureOut->Controls->Add(this->rbFahrenheitOut);
			this->grpTemperatureOut->Controls->Add(this->rbKelvinOut);
			resources->ApplyResources(this->grpTemperatureOut, L"grpTemperatureOut");
			this->grpTemperatureOut->Name = L"grpTemperatureOut";
			this->grpTemperatureOut->TabStop = false;
			// 
			// rbCelciusOut
			// 
			resources->ApplyResources(this->rbCelciusOut, L"rbCelciusOut");
			this->rbCelciusOut->Name = L"rbCelciusOut";
			this->rbCelciusOut->TabStop = true;
			this->rbCelciusOut->UseVisualStyleBackColor = true;
			this->rbCelciusOut->Click += gcnew System::EventHandler(this, &Form1::rbCelciusOut_Click);
			// 
			// rbFahrenheitOut
			// 
			resources->ApplyResources(this->rbFahrenheitOut, L"rbFahrenheitOut");
			this->rbFahrenheitOut->Name = L"rbFahrenheitOut";
			this->rbFahrenheitOut->TabStop = true;
			this->rbFahrenheitOut->UseVisualStyleBackColor = true;
			this->rbFahrenheitOut->Click += gcnew System::EventHandler(this, &Form1::rbFahrenheitOut_Click);
			// 
			// rbKelvinOut
			// 
			resources->ApplyResources(this->rbKelvinOut, L"rbKelvinOut");
			this->rbKelvinOut->Name = L"rbKelvinOut";
			this->rbKelvinOut->TabStop = true;
			this->rbKelvinOut->UseVisualStyleBackColor = true;
			this->rbKelvinOut->Click += gcnew System::EventHandler(this, &Form1::rbKelvinOut_Click);
			// 
			// grpTemperatureIn
			// 
			this->grpTemperatureIn->Controls->Add(this->rbCelciusIn);
			this->grpTemperatureIn->Controls->Add(this->rbFahrenheitIn);
			this->grpTemperatureIn->Controls->Add(this->rbKelvinIn);
			resources->ApplyResources(this->grpTemperatureIn, L"grpTemperatureIn");
			this->grpTemperatureIn->Name = L"grpTemperatureIn";
			this->grpTemperatureIn->TabStop = false;
			// 
			// rbCelciusIn
			// 
			resources->ApplyResources(this->rbCelciusIn, L"rbCelciusIn");
			this->rbCelciusIn->Name = L"rbCelciusIn";
			this->rbCelciusIn->TabStop = true;
			this->rbCelciusIn->UseVisualStyleBackColor = true;
			this->rbCelciusIn->Click += gcnew System::EventHandler(this, &Form1::rbCelciusIn_Click);
			// 
			// rbFahrenheitIn
			// 
			resources->ApplyResources(this->rbFahrenheitIn, L"rbFahrenheitIn");
			this->rbFahrenheitIn->Name = L"rbFahrenheitIn";
			this->rbFahrenheitIn->TabStop = true;
			this->rbFahrenheitIn->UseVisualStyleBackColor = true;
			this->rbFahrenheitIn->Click += gcnew System::EventHandler(this, &Form1::rbFahrenheitIn_Click);
			// 
			// rbKelvinIn
			// 
			resources->ApplyResources(this->rbKelvinIn, L"rbKelvinIn");
			this->rbKelvinIn->Name = L"rbKelvinIn";
			this->rbKelvinIn->TabStop = true;
			this->rbKelvinIn->UseVisualStyleBackColor = true;
			this->rbKelvinIn->Click += gcnew System::EventHandler(this, &Form1::rbKelvinIn_Click);
			// 
			// tabUnits
			// 
			this->tabUnits->Controls->Add(this->tabTemperature);
			this->tabUnits->Controls->Add(this->tabLength);
			this->tabUnits->Controls->Add(this->tabMass);
			this->tabUnits->Controls->Add(this->tabVolume);
			this->tabUnits->Controls->Add(this->tabArea);
			resources->ApplyResources(this->tabUnits, L"tabUnits");
			this->tabUnits->Name = L"tabUnits";
			this->tabUnits->SelectedIndex = 0;
			// 
			// lblInstructions
			// 
			resources->ApplyResources(this->lblInstructions, L"lblInstructions");
			this->lblInstructions->Name = L"lblInstructions";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// txtOutput
			// 
			resources->ApplyResources(this->txtOutput, L"txtOutput");
			this->txtOutput->Name = L"txtOutput";
			// 
			// btnConvert
			// 
			resources->ApplyResources(this->btnConvert, L"btnConvert");
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Click += gcnew System::EventHandler(this, &Form1::btnConvert_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->convertToolStripMenuItem, this->helpToolStripMenuItem});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			resources->ApplyResources(this->fileToolStripMenuItem, L"fileToolStripMenuItem");
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			resources->ApplyResources(this->exitToolStripMenuItem, L"exitToolStripMenuItem");
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// convertToolStripMenuItem
			// 
			this->convertToolStripMenuItem->Name = L"convertToolStripMenuItem";
			resources->ApplyResources(this->convertToolStripMenuItem, L"convertToolStripMenuItem");
			this->convertToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::convertToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			resources->ApplyResources(this->helpToolStripMenuItem, L"helpToolStripMenuItem");
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// btnSwap
			// 
			resources->ApplyResources(this->btnSwap, L"btnSwap");
			this->btnSwap->Name = L"btnSwap";
			this->btnSwap->Click += gcnew System::EventHandler(this, &Form1::btnSwap_Click);
			// 
			// Form1
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnSwap);
			this->Controls->Add(this->btnConvert);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblInstructions);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->tabUnits);
			this->Controls->Add(this->menuStrip1);
			this->HelpButton = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabArea->ResumeLayout(false);
			this->grpAreaOut->ResumeLayout(false);
			this->grpAreaOut->PerformLayout();
			this->grpAreaIn->ResumeLayout(false);
			this->grpAreaIn->PerformLayout();
			this->tabVolume->ResumeLayout(false);
			this->grpVolumeOut->ResumeLayout(false);
			this->grpVolumeOut->PerformLayout();
			this->grpVolumeIn->ResumeLayout(false);
			this->grpVolumeIn->PerformLayout();
			this->tabMass->ResumeLayout(false);
			this->grpMassOut->ResumeLayout(false);
			this->grpMassOut->PerformLayout();
			this->grpMassIn->ResumeLayout(false);
			this->grpMassIn->PerformLayout();
			this->tabLength->ResumeLayout(false);
			this->grpLenghtOut->ResumeLayout(false);
			this->grpLenghtOut->PerformLayout();
			this->grpLengthIn->ResumeLayout(false);
			this->grpLengthIn->PerformLayout();
			this->tabTemperature->ResumeLayout(false);
			this->grpTemperatureOut->ResumeLayout(false);
			this->grpTemperatureOut->PerformLayout();
			this->grpTemperatureIn->ResumeLayout(false);
			this->grpTemperatureIn->PerformLayout();
			this->tabUnits->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

}
#pragma endregion

private: int RadioInChanged(int UnitTypeIn)	{
			 rbCelciusIn->Checked = false;
			 rbFahrenheitIn->Checked = false;
			 rbKelvinIn->Checked = false;
			 rbMetersIn->Checked = false;
			 rbInchesIn->Checked = false;
			 rbFeetIn->Checked = false;
			 rbYardsIn->Checked = false;
			 rbMilesIn->Checked = false;
			 rbKilogramsIn->Checked = false;
			 rbTonsIn->Checked = false;
			 rbPoundsIn->Checked = false;
			 rbLitersIn->Checked = false;
			 rbGallonsIn->Checked = false;
			 rbCubicInchesIn->Checked = false;
			 rbSquaredMetersIn->Checked = false;
			 rbSquaredInchesIn->Checked = false;
			 rbAcresIn->Checked = false;
			 return (UnitTypeIn *1);
		 }
private: int RadioOutChanged(int UnitTypeOut){
			 rbCelciusOut->Checked = false;
			 rbFahrenheitOut->Checked = false;
			 rbKelvinOut->Checked = false;
			 rbMetersOut->Checked = false;
			 rbInchesOut->Checked = false;
			 rbFeetOut->Checked = false;
			 rbYardsOut->Checked = false;
			 rbMilesOut->Checked = false;
			 rbKilogramsOut->Checked = false;
			 rbTonsOut->Checked = false;
			 rbPoundsOut->Checked = false;
			 rbLitersOut->Checked = false;
			 rbGallonsOut->Checked = false;
			 rbCubicInchesOut->Checked = false;
			 rbSquaredMetersOut->Checked = false;
			 rbSquaredInchesOut->Checked = false;
			 rbAcresOut->Checked = false;
			 return (UnitTypeOut *1);
		 }

private: System::Void btnConvert_Click(System::Object^  sender, System::EventArgs^  e) {
			 Convert();

//// In the first part we convert the input value to the SI unit of the conversion kind.
//		if (InputClass == OutputClass)
//		{
//			 if (InputType == 1)
//			  {
//				  MiddleValue = (InputValue);
//			  }
//			else
//			if (InputType == 2)
//			  {
//				  MiddleValue = ((InputValue - 32) / 1.8);
//			  }
//			else
//			if (InputType == 3)
//				{
//					MiddleValue = (InputValue -273.15);
//				}
//			else
//			if (InputType == 4)
//				{
//					MiddleValue = (InputValue);
//				}
//			else
//			if (InputType == 5)
//				{
//					MiddleValue = (InputValue * 0.0254);
//				}
//			else
//			if (InputType == 6)
//				{
//					MiddleValue = (InputValue * 0.3048);
//				}
//			else
//			if (InputType == 7)
//				{
//					MiddleValue = (InputValue * 0.9144);
//				}
//			else
//			if (InputType == 8)
//				{
//					MiddleValue = (InputValue * 1609.344);
//				}
//			else
//			if (InputType == 9)
//				{
//					MiddleValue = (InputValue);
//				}
//			else
//			if (InputType == 10)
//				{
//					MiddleValue = (InputValue * 1000);
//				}
//			else
//			if (InputType == 11)
//				{
//					MiddleValue = (InputValue * 0.45359237);
//				}
//			else
//			if (InputType == 12)
//			  {
//				  MiddleValue = (InputValue);
//			  }
//			else
//			if (InputType == 13)
//			  {
//				  MiddleValue = (InputValue * 3.785411784);
//			  }
//			else
//			if (InputType == 14)
//			  {
//				  MiddleValue = (InputValue * 0.016387064);
//			  }
//			else
//			if (InputType == 15)
//			  {
//				  MiddleValue = (InputValue);
//			  }
//			else
//			if (InputType == 16)
//			  {
//				  MiddleValue = (InputValue * 4046.8564224);
//			  }
//			else
//			if (InputType == 17)
//			  {
//				  MiddleValue = (InputValue * 0.00064516);
//			  }
//// From here on the output value will be calculated.
//			if (OutputType == 1)
//			  {
//				  OutputValue = (MiddleValue); 
//			  }
//			else
//			if (OutputType == 2)
//			  {
//				  OutputValue = ((MiddleValue * 1.8) + 32); 
//			  }
//			else
//			if (OutputType == 3)
//			  {
//				  OutputValue = (MiddleValue + 273.15); 
//			  }
//			else
//			if (OutputType == 4)
//			  {
//				  OutputValue = (MiddleValue); 
//			  }
//			else
//			if (OutputType == 5)
//			  {
//				  OutputValue = (MiddleValue * 39.37007874); 
//			  }
//			else
//			if (OutputType == 6)
//				{
//					OutputValue = (MiddleValue / 0.3048);
//				}
//			else
//			if (OutputType == 7)
//				{
//					OutputValue = (MiddleValue / 0.9144);
//				}
//			else
//			if (OutputType == 8)
//				{
//					OutputValue = (MiddleValue / 1609.344);
//				}
//			else
//			if (OutputType == 9)
//				{
//					OutputValue = (MiddleValue);
//				}
//			else
//			if (OutputType == 10)
//				{
//					OutputValue = (MiddleValue / 1000);
//				}
//			else
//			if (OutputType == 11)
//				{
//					OutputValue = (MiddleValue / 0.45359237);
//				}
//			else
//			if (OutputType == 12)
//			  {
//				  OutputValue = (MiddleValue);
//			  }
//			else
//			if (OutputType == 13)
//			  {
//				  OutputValue = (MiddleValue / 3.785411784);
//			  }
//			else
//			if (OutputType == 14)
//			  {
//				  OutputValue = (MiddleValue / 0.016387064);
//			  }
//			else
//			if (OutputType == 15)
//			  {
//				  OutputValue = (MiddleValue);
//			  }
//			else
//			if (OutputType == 16)
//			  {
//				  OutputValue = (MiddleValue / 4046.8564224);
//			  }
//			else
//			if (OutputType == 17)
//			  {
//				  OutputValue = (MiddleValue / 0.00064516);
//			  }
//// First we de-float the value to 3 decimals
//			double d;
//			int i;
//
//			d = OutputValue * 1000.0;
//			i = d + 0.5;
//			d = (float)i / 1000.0;
//// Here the output is given.
//				  txtOutput->Text = Convert::ToString(d);
//		}
//		else
//		{
//			MessageBox::Show("Please select an input and output unit of the same conversion kind");
//		}
//// And this line is used to automatically select the input after converting.
//				  txtInput->SelectAll();
		 }
private: System::Void txtInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int Temp;
			 
			 if(Int32::TryParse(txtInput->Text, Temp))
				InputValue = Convert::ToDouble(txtInput->Text);
			 else
				//txtInput->Text = Convert::ToString(InputValue);
				txtInput->Text = "";
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		InputValue = 0;
		InputType = 0;
		OutputValue = 0;
		UnitType = 0;
		Unit = 0;
		MiddleValue = 0;
		OutputType = 0;
		txtInput->Text = "0";
		txtOutput->Text = "0";
		 }
private: System::Void txtInput_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtInput->SelectAll();
		 }

private: System::Void rbCelciusIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbCelciusIn->Checked = true;
			 InputType = 1;
			 InputClass = 1;
		 }
private: System::Void rbFahrenheitIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbFahrenheitIn->Checked = true;
			 InputType = 2;
			 InputClass = 1;
		 }
private: System::Void rbKelvinIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbKelvinIn->Checked = true;
			 InputType = 3;
			 InputClass = 1;
		 }
private: System::Void rbMetersIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbMetersIn->Checked = true;
			 InputType = 4;
			 InputClass = 2;
		 }
private: System::Void rbInchesIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbInchesIn->Checked = true;
			 InputType = 5;
			 InputClass = 2;
		 }
private: System::Void rbFeetIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbFeetIn->Checked = true;
			 InputType = 6;
			 InputClass = 2;
		 }
private: System::Void rbMilesIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbMilesIn->Checked = true;
			 InputType = 8;
			 InputClass = 2;
		 }
private: System::Void rbYardsIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbYardsIn->Checked = true;
			 InputType = 7;
			 InputClass = 2;
		 }
private: System::Void rbKilogramsIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbKilogramsIn->Checked = true;
			 InputType = 9;
			 InputClass = 3;
		 }
private: System::Void rbTonsIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbTonsIn->Checked = true;
			 InputType = 10;
			 InputClass = 3;
		 }
private: System::Void rbPoundsIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbPoundsIn->Checked = true;
			 InputType = 11;
			 InputClass = 3;
		 }
private: System::Void rbLitersIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbLitersIn->Checked = true;
			 InputType = 12;
			 InputClass = 4;
		 }
private: System::Void rbGallonsIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbGallonsIn->Checked = true;
			 InputType = 13;
			 InputClass = 4;
		 }
private: System::Void rbCubicInchesIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbCubicInchesIn->Checked = true;
			 InputType = 14;
			 InputClass = 4;
		 }
private: System::Void rbSquaredMetersIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbSquaredMetersIn->Checked = true;
			 InputType = 15;
			 InputClass = 5;
		 }
private: System::Void rbAcresIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbAcresIn->Checked = true;
			 InputType = 16;
			 InputClass = 5;
		 }
private: System::Void rbSquaredInchesIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioInChanged(UnitType);
			 rbSquaredInchesIn->Checked = true;
			 InputType = 17;
			 InputClass = 5;
		 }

private: System::Void rbCelciusOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbCelciusOut->Checked = true;
			 OutputType = 1;
			 OutputClass = 1;
		 }
private: System::Void rbFahrenheitOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbFahrenheitOut->Checked = true;
			 OutputType = 2;
			 OutputClass = 1;
		 }
private: System::Void rbKelvinOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbKelvinOut->Checked = true;
			 OutputType = 3;
			 OutputClass = 1;
		 }
private: System::Void rbMetersOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbMetersOut->Checked = true;
			 OutputType = 4;
			 OutputClass = 2;
		 }
private: System::Void rbInchesOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbInchesOut->Checked = true;
			 OutputType = 5;
			 OutputClass = 2;
		 }
private: System::Void rbFeetOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbFeetOut->Checked = true;
			 OutputType = 6;
			 OutputClass = 2;
		 }
private: System::Void rbYardsOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbYardsOut->Checked = true;
			 OutputType = 7;
			 OutputClass = 2;
		 }
private: System::Void rbMilesOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbMilesOut->Checked = true;
			 OutputType = 8;
			 OutputClass = 2;
		 }
private: System::Void rbKilogramsOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbKilogramsOut->Checked = true;
			 OutputType = 9;
			 OutputClass = 3;
		 }
private: System::Void rbTonsOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbTonsOut->Checked = true;
			 OutputType = 10;
			 OutputClass = 3;
		 }
private: System::Void rbPoundsOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbPoundsOut->Checked = true;
			 OutputType = 11;
			 OutputClass = 3;
		 }
private: System::Void rbLitersOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbLitersOut->Checked = true;
			 OutputType = 12;
			 OutputClass = 4;
		 }
private: System::Void rbGallonsOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbGallonsOut->Checked = true;
			 OutputType = 13;
			 OutputClass = 4;
		 }
private: System::Void rbCubicInchesOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbCubicInchesOut->Checked = true;
			 OutputType = 14;
			 OutputClass = 4;
		 }
private: System::Void rbSquaredMetersOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbSquaredMetersOut->Checked = true;
			 OutputType = 15;
			 OutputClass = 5;
		 }
private: System::Void rbAcresOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbAcresOut->Checked = true;
			 OutputType = 16;
			 OutputClass = 5;
		 }
private: System::Void rbSquaredInchesOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 rbSquaredInchesOut->Checked = true;
			 OutputType = 17;
			 OutputClass = 5;
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void convertToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Convert();
		 }
private: Void Convert(){
			 // In the first part we convert the input value to the SI unit of the conversion kind.
		if (InputClass == OutputClass)
		{
			 if (InputType == 1)
			  {
				  MiddleValue = (InputValue);
			  }
			else
			if (InputType == 2)
			  {
				  MiddleValue = ((InputValue - 32) / 1.8);
			  }
			else
			if (InputType == 3)
				{
					MiddleValue = (InputValue -273.15);
				}
			else
			if (InputType == 4)
				{
					MiddleValue = (InputValue);
				}
			else
			if (InputType == 5)
				{
					MiddleValue = (InputValue * 0.0254);
				}
			else
			if (InputType == 6)
				{
					MiddleValue = (InputValue * 0.3048);
				}
			else
			if (InputType == 7)
				{
					MiddleValue = (InputValue * 0.9144);
				}
			else
			if (InputType == 8)
				{
					MiddleValue = (InputValue * 1609.344);
				}
			else
			if (InputType == 9)
				{
					MiddleValue = (InputValue);
				}
			else
			if (InputType == 10)
				{
					MiddleValue = (InputValue * 1000);
				}
			else
			if (InputType == 11)
				{
					MiddleValue = (InputValue * 0.45359237);
				}
			else
			if (InputType == 12)
			  {
				  MiddleValue = (InputValue);
			  }
			else
			if (InputType == 13)
			  {
				  MiddleValue = (InputValue * 3.785411784);
			  }
			else
			if (InputType == 14)
			  {
				  MiddleValue = (InputValue * 0.016387064);
			  }
			else
			if (InputType == 15)
			  {
				  MiddleValue = (InputValue);
			  }
			else
			if (InputType == 16)
			  {
				  MiddleValue = (InputValue * 4046.8564224);
			  }
			else
			if (InputType == 17)
			  {
				  MiddleValue = (InputValue * 0.00064516);
			  }
// From here on the output value will be calculated.
			if (OutputType == 1)
			  {
				  OutputValue = (MiddleValue); 
			  }
			else
			if (OutputType == 2)
			  {
				  OutputValue = ((MiddleValue * 1.8) + 32); 
			  }
			else
			if (OutputType == 3)
			  {
				  OutputValue = (MiddleValue + 273.15); 
			  }
			else
			if (OutputType == 4)
			  {
				  OutputValue = (MiddleValue); 
			  }
			else
			if (OutputType == 5)
			  {
				  OutputValue = (MiddleValue * 39.37007874); 
			  }
			else
			if (OutputType == 6)
				{
					OutputValue = (MiddleValue / 0.3048);
				}
			else
			if (OutputType == 7)
				{
					OutputValue = (MiddleValue / 0.9144);
				}
			else
			if (OutputType == 8)
				{
					OutputValue = (MiddleValue / 1609.344);
				}
			else
			if (OutputType == 9)
				{
					OutputValue = (MiddleValue);
				}
			else
			if (OutputType == 10)
				{
					OutputValue = (MiddleValue / 1000);
				}
			else
			if (OutputType == 11)
				{
					OutputValue = (MiddleValue / 0.45359237);
				}
			else
			if (OutputType == 12)
			  {
				  OutputValue = (MiddleValue);
			  }
			else
			if (OutputType == 13)
			  {
				  OutputValue = (MiddleValue / 3.785411784);
			  }
			else
			if (OutputType == 14)
			  {
				  OutputValue = (MiddleValue / 0.016387064);
			  }
			else
			if (OutputType == 15)
			  {
				  OutputValue = (MiddleValue);
			  }
			else
			if (OutputType == 16)
			  {
				  OutputValue = (MiddleValue / 4046.8564224);
			  }
			else
			if (OutputType == 17)
			  {
				  OutputValue = (MiddleValue / 0.00064516);
			  }
// First we de-float the value to 3 decimals
			double d;
			int i;

			d = OutputValue * 1000.0;
			i = d + 0.5;
			d = (float)i / 1000.0;
// Here the output is given.
				  txtOutput->Text = Convert::ToString(d);
		}
		else
		{
			MessageBox::Show("Please select an input and output unit of the same conversion kind");
		}
// And this line is used to automatically select the input after converting.
				  txtInput->SelectAll();
		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Welcome to ConverBot, \n\nThis program has the simple function of converting user input values to other units. \n\n First of all some general information about the program \n 1. Due to a checksum on numeric values it is not possible to give decimal numbers as input value. The seperating dots/comma's are seen as non-numeric value. \n 2. If you select input unit and output unit of two different kinds an error message will show. \n\n Secondly, some information about the units: \n 1. Tons are as metric Tons \n 2. Miles are in standard miles \n 3. Gallons are as US liquid gallons \n 4. Acres as regular acres.");
		 }
private: System::Void btnSwap_Click(System::Object^  sender, System::EventArgs^  e) {

	if (InputClass == OutputClass)
		{
 // Clearing all radiobuttons
			 UnitType = 0;
			 Unit = RadioOutChanged(UnitType);
			 Unit = RadioInChanged(UnitType);

 // Temporary storing of Unit types
			 TmpSwapOut = OutputType;
			 TmpSwapIn = InputType;
			 OutputType = TmpSwapIn;
			 InputType = TmpSwapOut;
 // Output checked radiobutton swapping
			 if (TmpSwapIn == 1)
			 {
				 rbCelciusOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 2)
			 {
				 rbFahrenheitOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 3)
			 {
				 rbKelvinOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 4)
			 {
				 rbMetersOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 5)
			 {
				 rbInchesOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 6)
			 {
				 rbFeetOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 7)
			 {
				 rbYardsOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 8)
			 {
				 rbMilesOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 9)
			 {
				 rbKilogramsOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 10)
			 {
				 rbTonsOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 11)
			 {
				 rbPoundsOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 12)
			 {
				 rbLitersOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 13)
			 {
				 rbGallonsOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 14)
			 {
				 rbCubicInchesOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 15)
			 {
				 rbSquaredMetersOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 16)
			 {
				 rbAcresOut->Checked = true;
			 }
			 else
			 if (TmpSwapIn == 17)
			 {
				 rbSquaredInchesOut->Checked = true;
			 }

 // And Input checked radiobutton swapping
			 if (TmpSwapOut == 1)
			 {
				 rbCelciusIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 2)
			 {
				 rbFahrenheitIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 3)
			 {
				 rbKelvinIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 4)
			 {
				 rbMetersIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 5)
			 {
				 rbInchesIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 6)
			 {
				 rbFeetIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 7)
			 {
				 rbYardsIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 8)
			 {
				 rbMilesIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 9)
			 {
				 rbKilogramsIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 10)
			 {
				 rbTonsIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 11)
			 {
				 rbPoundsIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 12)
			 {
				 rbLitersIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 13)
			 {
				 rbGallonsIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 14)
			 {
				 rbCubicInchesIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 15)
			 {
				 rbSquaredMetersIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 16)
			 {
				 rbAcresIn->Checked = true;
			 }
			 else
			 if (TmpSwapOut == 17)
			 {
				 rbSquaredInchesIn->Checked = true;
			 }
	}
	else
	{
		MessageBox::Show("Please select an input and output unit of the same conversion kind");
	}
		 }
};
}