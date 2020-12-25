
#pragma once

template <typename T>
struct TLinearOperator
{

    TLinearOperator();
    //operator
    friend std::ostream &operator<<(std::ostream &out, const Type &var)
    {
        for (auto i = 0; i < size; i++)
            out << var.data[i] << ' ';
        return out;
    }

     Type operator+(const Type &var) const
    {
        Type temp;
        for (auto i = size; i--; temp.data[i] = this->data[i] + var.data[i])
            ;
        return temp;
    }

    /**
         * operator + overload
         * @return Type
         */
     Type operator+(Type var) const
    {
        Type temp;
        for (auto i = size; i--; temp.data[i] = this->data[i] + var)
            ;
        return temp;
    }
};

//test
template <typename Type, size_t size>
struct TestData
{
    union
    {
        Type data[size];
    };
};

struct Test : TestData<float, 3>, TLinearOperator<Test>
{
};
