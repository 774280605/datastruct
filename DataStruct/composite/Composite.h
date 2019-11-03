//
// Created by demon on 2019/11/3.
//

#ifndef DATASTRUCT_COMPOSITE_H
#define DATASTRUCT_COMPOSITE_H

#include <vector>

namespace composite{
    class Component{
    public:
        Component()= default;
        virtual~Component()= default;

        void Add(Component *component);

        void operation();

    private:
        std::vector<Component*> vector_;
    };

    class Composite: public Component {
    public:
        Composite()= default;
        virtual~Composite()= default;
    };
}





#endif //DATASTRUCT_COMPOSITE_H
