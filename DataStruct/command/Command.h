//
// Created by demon on 2019/10/28.
//

#ifndef DATASTRUCT_COMMAND_H
#define DATASTRUCT_COMMAND_H

class Receiver{
public:
    Receiver()=default;

    virtual ~Receiver() = default;

    void action();
};


class Command {
public:
    Command() = default;
    virtual ~Command()= default;

    virtual void execute()=0;

};

class CopyCommand:public Command{
public:
    explicit CopyCommand(Receiver*receiver);
    virtual ~CopyCommand()= default;

    void execute() override;

private:
    Receiver*receiver_{nullptr};
};

class Invoke{
public:
    explicit Invoke(Command*command);
    virtual ~Invoke()= default;
    void operation();
private:
    Command*command_{nullptr};
};


#endif //DATASTRUCT_COMMAND_H
