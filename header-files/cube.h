//@author: Efraim_Nabil
#pragma once
namespace uiuc{
    class cube{
        private:
            double length_;

        public:
            cube(double length);
            double getLength() const;
            void setLength(double length);
            double getVolume() const;
            double getSurfaceArea();
    };
}
