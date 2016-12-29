// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#ifndef REFLANG_METADATA_METHODS_GEN_HPP
#define REFLANG_METADATA_METHODS_GEN_HPP

#include <string>

#include "lib/reflang.hpp"
#include "methods.src.hpp"

namespace reflang
{


template <>
class Class<MyClass> : public IClass
{
public:
	static const constexpr int FieldCount = 0;
	static const constexpr int StaticFieldCount = 0;
	static const constexpr int MethodCount = 10;
	static const constexpr int StaticMethodCount = 0;

	int GetFieldCount() const override;
	Reference GetField(const Reference& o, const std::string& name) const override;

	int GetStaticFieldCount() const override;
	int GetMethodCount() const override;
	int GetStaticMethodCount() const override;

	const std::string& GetName() const override;

	// Calls T::operator() on each field of 'MyClass'.
	// Works well with C++14 generic lambdas.
	template <typename T>
	static void IterateFields(const MyClass& c, T t);

	template <typename T>
	static void IterateFields(MyClass& c, T t);

	template <typename T>
	static void IterateStaticFields(T t);
};

template <typename T>
void Class<MyClass>::IterateFields(const MyClass& c, T t)
{
}

template <typename T>
void Class<MyClass>::IterateFields(MyClass& c, T t)
{
}

template <typename T>
void Class<MyClass>::IterateStaticFields(T t)
{
}

// MyClass methods metadata.
template <>
class Method<decltype(&MyClass::Method0), &MyClass::Method0> : public IMethod
{
public:
	const std::string& GetName() const override;
	int GetParameterCount() const override;
	Object Invoke(const Reference& o, const std::vector<Object>& args) override;
};

template <>
class Method<decltype(&MyClass::Method1), &MyClass::Method1> : public IMethod
{
public:
	const std::string& GetName() const override;
	int GetParameterCount() const override;
	Object Invoke(const Reference& o, const std::vector<Object>& args) override;
};

template <>
class Method<decltype(&MyClass::RMethod0), &MyClass::RMethod0> : public IMethod
{
public:
	const std::string& GetName() const override;
	int GetParameterCount() const override;
	Object Invoke(const Reference& o, const std::vector<Object>& args) override;
};

template <>
class Method<decltype(&MyClass::RMethod1), &MyClass::RMethod1> : public IMethod
{
public:
	const std::string& GetName() const override;
	int GetParameterCount() const override;
	Object Invoke(const Reference& o, const std::vector<Object>& args) override;
};

template <>
class Method<decltype(&MyClass::VirtualMethod), &MyClass::VirtualMethod> : public IMethod
{
public:
	const std::string& GetName() const override;
	int GetParameterCount() const override;
	Object Invoke(const Reference& o, const std::vector<Object>& args) override;
};

template <>
class Method<decltype(&MyClass::ConstMethod), &MyClass::ConstMethod> : public IMethod
{
public:
	const std::string& GetName() const override;
	int GetParameterCount() const override;
	Object Invoke(const Reference& o, const std::vector<Object>& args) override;
};

template <>
class Method<decltype(&MyClass::MethodWithClassArg), &MyClass::MethodWithClassArg> : public IMethod
{
public:
	const std::string& GetName() const override;
	int GetParameterCount() const override;
	Object Invoke(const Reference& o, const std::vector<Object>& args) override;
};

template <>
class Method<decltype(&MyClass::MethodWithPointerArg), &MyClass::MethodWithPointerArg> : public IMethod
{
public:
	const std::string& GetName() const override;
	int GetParameterCount() const override;
	Object Invoke(const Reference& o, const std::vector<Object>& args) override;
};

template <>
class Method<decltype(&MyClass::MethodWithConstReferenceArg0), &MyClass::MethodWithConstReferenceArg0> : public IMethod
{
public:
	const std::string& GetName() const override;
	int GetParameterCount() const override;
	Object Invoke(const Reference& o, const std::vector<Object>& args) override;
};

template <>
class Method<decltype(&MyClass::MethodWithConstReferenceArg1), &MyClass::MethodWithConstReferenceArg1> : public IMethod
{
public:
	const std::string& GetName() const override;
	int GetParameterCount() const override;
	Object Invoke(const Reference& o, const std::vector<Object>& args) override;
};

// End of MyClass methods metadata.



}  // namespace reflang

#endif //REFLANG_METADATA_METHODS_GEN_HPP
