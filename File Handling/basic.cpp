string inputText;
    cout << "Enter the input text: ";
    cin >> inputText;

    ofstream myfile1("sample1.txt");
    if (!myfile1.is_open()) {
        cerr << "Unable to open file sample1.txt" << endl;
        return 1;
    }

    myfile1 << inputText << endl;
    myfile1.close();

    string revInputText = inputText;
    reverse(revInputText.begin(), revInputText.end());

    ofstream myfile2("sample2.txt");
    if (!myfile2.is_open()) {
        cerr << "Unable to open file sample2.txt" << endl;
        return 1;
    }

    myfile2 << revInputText << endl;
    myfile2.close();

    cout << "Comparing files..." << endl;
    if (compareFiles("sample1.txt", "sample2.txt")) {
        cout << "Files are the same." << endl;
    } else {
        cout << "Files differ." << endl;
    }

    return 0;