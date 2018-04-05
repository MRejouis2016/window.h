Class Windows
{
  private:
    string homescreen;
    string menu;
    string program;
    string start;
  
  public:
    Windows();
    Windows(char);
    void setHomescreen();
    void setMenu();
    void setProgram();
    void setStart();
    string getHomescreen() const;
    string getMenu() const;
    string getProgram() const;
    string getStart() const;
}