// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: student.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "student.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tutorial {
class Student_PhoneNumberDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Student_PhoneNumber> {
} _Student_PhoneNumber_default_instance_;
class StudentDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Student> {
} _Student_default_instance_;

namespace protobuf_student_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Student_PhoneNumber, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Student_PhoneNumber, number_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Student_PhoneNumber, type_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Student, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Student, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Student, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Student, email_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Student, phone_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Student_PhoneNumber)},
  { 7, -1, sizeof(Student)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Student_PhoneNumber_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Student_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "student.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _Student_PhoneNumber_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Student_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Student_PhoneNumber_default_instance_.DefaultConstruct();
  _Student_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\rstudent.proto\022\010tutorial\"\315\001\n\007Student\022\n\n"
      "\002id\030\001 \001(\004\022\014\n\004name\030\002 \001(\t\022\r\n\005email\030\003 \001(\t\022,"
      "\n\005phone\030\004 \003(\0132\035.tutorial.Student.PhoneNu"
      "mber\032H\n\013PhoneNumber\022\016\n\006number\030\001 \001(\t\022)\n\004t"
      "ype\030\002 \001(\0162\033.tutorial.Student.PhoneType\"!"
      "\n\tPhoneType\022\n\n\006MOBILE\020\000\022\010\n\004HOME\020\001b\006proto"
      "3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 241);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "student.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_student_2eproto

const ::google::protobuf::EnumDescriptor* Student_PhoneType_descriptor() {
  protobuf_student_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_student_2eproto::file_level_enum_descriptors[0];
}
bool Student_PhoneType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Student_PhoneType Student::MOBILE;
const Student_PhoneType Student::HOME;
const Student_PhoneType Student::PhoneType_MIN;
const Student_PhoneType Student::PhoneType_MAX;
const int Student::PhoneType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Student_PhoneNumber::kNumberFieldNumber;
const int Student_PhoneNumber::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Student_PhoneNumber::Student_PhoneNumber()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_student_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.Student.PhoneNumber)
}
Student_PhoneNumber::Student_PhoneNumber(const Student_PhoneNumber& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.number().size() > 0) {
    number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.number_);
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:tutorial.Student.PhoneNumber)
}

void Student_PhoneNumber::SharedCtor() {
  number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
  _cached_size_ = 0;
}

Student_PhoneNumber::~Student_PhoneNumber() {
  // @@protoc_insertion_point(destructor:tutorial.Student.PhoneNumber)
  SharedDtor();
}

void Student_PhoneNumber::SharedDtor() {
  number_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Student_PhoneNumber::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Student_PhoneNumber::descriptor() {
  protobuf_student_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_student_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Student_PhoneNumber& Student_PhoneNumber::default_instance() {
  protobuf_student_2eproto::InitDefaults();
  return *internal_default_instance();
}

Student_PhoneNumber* Student_PhoneNumber::New(::google::protobuf::Arena* arena) const {
  Student_PhoneNumber* n = new Student_PhoneNumber;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Student_PhoneNumber::Clear() {
// @@protoc_insertion_point(message_clear_start:tutorial.Student.PhoneNumber)
  number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
}

bool Student_PhoneNumber::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.Student.PhoneNumber)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string number = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_number()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->number().data(), static_cast<int>(this->number().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.Student.PhoneNumber.number"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .tutorial.Student.PhoneType type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::tutorial::Student_PhoneType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tutorial.Student.PhoneNumber)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.Student.PhoneNumber)
  return false;
#undef DO_
}

void Student_PhoneNumber::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.Student.PhoneNumber)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string number = 1;
  if (this->number().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->number().data(), static_cast<int>(this->number().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.Student.PhoneNumber.number");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->number(), output);
  }

  // .tutorial.Student.PhoneType type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // @@protoc_insertion_point(serialize_end:tutorial.Student.PhoneNumber)
}

::google::protobuf::uint8* Student_PhoneNumber::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.Student.PhoneNumber)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string number = 1;
  if (this->number().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->number().data(), static_cast<int>(this->number().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.Student.PhoneNumber.number");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->number(), target);
  }

  // .tutorial.Student.PhoneType type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tutorial.Student.PhoneNumber)
  return target;
}

size_t Student_PhoneNumber::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tutorial.Student.PhoneNumber)
  size_t total_size = 0;

  // string number = 1;
  if (this->number().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->number());
  }

  // .tutorial.Student.PhoneType type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Student_PhoneNumber::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tutorial.Student.PhoneNumber)
  GOOGLE_DCHECK_NE(&from, this);
  const Student_PhoneNumber* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Student_PhoneNumber>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tutorial.Student.PhoneNumber)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tutorial.Student.PhoneNumber)
    MergeFrom(*source);
  }
}

void Student_PhoneNumber::MergeFrom(const Student_PhoneNumber& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tutorial.Student.PhoneNumber)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.number().size() > 0) {

    number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.number_);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void Student_PhoneNumber::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tutorial.Student.PhoneNumber)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Student_PhoneNumber::CopyFrom(const Student_PhoneNumber& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tutorial.Student.PhoneNumber)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Student_PhoneNumber::IsInitialized() const {
  return true;
}

void Student_PhoneNumber::Swap(Student_PhoneNumber* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Student_PhoneNumber::InternalSwap(Student_PhoneNumber* other) {
  number_.Swap(&other->number_);
  std::swap(type_, other->type_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Student_PhoneNumber::GetMetadata() const {
  protobuf_student_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_student_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Student_PhoneNumber

// string number = 1;
void Student_PhoneNumber::clear_number() {
  number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Student_PhoneNumber::number() const {
  // @@protoc_insertion_point(field_get:tutorial.Student.PhoneNumber.number)
  return number_.GetNoArena();
}
void Student_PhoneNumber::set_number(const ::std::string& value) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.Student.PhoneNumber.number)
}
#if LANG_CXX11
void Student_PhoneNumber::set_number(::std::string&& value) {
  
  number_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tutorial.Student.PhoneNumber.number)
}
#endif
void Student_PhoneNumber::set_number(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Student.PhoneNumber.number)
}
void Student_PhoneNumber::set_number(const char* value, size_t size) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Student.PhoneNumber.number)
}
::std::string* Student_PhoneNumber::mutable_number() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.Student.PhoneNumber.number)
  return number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Student_PhoneNumber::release_number() {
  // @@protoc_insertion_point(field_release:tutorial.Student.PhoneNumber.number)
  
  return number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Student_PhoneNumber::set_allocated_number(::std::string* number) {
  if (number != NULL) {
    
  } else {
    
  }
  number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), number);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Student.PhoneNumber.number)
}

// .tutorial.Student.PhoneType type = 2;
void Student_PhoneNumber::clear_type() {
  type_ = 0;
}
::tutorial::Student_PhoneType Student_PhoneNumber::type() const {
  // @@protoc_insertion_point(field_get:tutorial.Student.PhoneNumber.type)
  return static_cast< ::tutorial::Student_PhoneType >(type_);
}
void Student_PhoneNumber::set_type(::tutorial::Student_PhoneType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:tutorial.Student.PhoneNumber.type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Student::kIdFieldNumber;
const int Student::kNameFieldNumber;
const int Student::kEmailFieldNumber;
const int Student::kPhoneFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Student::Student()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_student_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.Student)
}
Student::Student(const Student& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      phone_(from.phone_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.email().size() > 0) {
    email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:tutorial.Student)
}

void Student::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = GOOGLE_ULONGLONG(0);
  _cached_size_ = 0;
}

Student::~Student() {
  // @@protoc_insertion_point(destructor:tutorial.Student)
  SharedDtor();
}

void Student::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Student::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Student::descriptor() {
  protobuf_student_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_student_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Student& Student::default_instance() {
  protobuf_student_2eproto::InitDefaults();
  return *internal_default_instance();
}

Student* Student::New(::google::protobuf::Arena* arena) const {
  Student* n = new Student;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Student::Clear() {
// @@protoc_insertion_point(message_clear_start:tutorial.Student)
  phone_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = GOOGLE_ULONGLONG(0);
}

bool Student::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.Student)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.Student.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string email = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_email()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->email().data(), static_cast<int>(this->email().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.Student.email"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .tutorial.Student.PhoneNumber phone = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_phone()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tutorial.Student)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.Student)
  return false;
#undef DO_
}

void Student::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.Student)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->id(), output);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.Student.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // string email = 3;
  if (this->email().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->email().data(), static_cast<int>(this->email().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.Student.email");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->email(), output);
  }

  // repeated .tutorial.Student.PhoneNumber phone = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->phone_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->phone(static_cast<int>(i)), output);
  }

  // @@protoc_insertion_point(serialize_end:tutorial.Student)
}

::google::protobuf::uint8* Student::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.Student)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->id(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.Student.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // string email = 3;
  if (this->email().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->email().data(), static_cast<int>(this->email().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.Student.email");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->email(), target);
  }

  // repeated .tutorial.Student.PhoneNumber phone = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->phone_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->phone(static_cast<int>(i)), deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tutorial.Student)
  return target;
}

size_t Student::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tutorial.Student)
  size_t total_size = 0;

  // repeated .tutorial.Student.PhoneNumber phone = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->phone_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->phone(static_cast<int>(i)));
    }
  }

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string email = 3;
  if (this->email().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->email());
  }

  // uint64 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Student::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tutorial.Student)
  GOOGLE_DCHECK_NE(&from, this);
  const Student* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Student>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tutorial.Student)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tutorial.Student)
    MergeFrom(*source);
  }
}

void Student::MergeFrom(const Student& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tutorial.Student)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  phone_.MergeFrom(from.phone_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.email().size() > 0) {

    email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
}

void Student::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tutorial.Student)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Student::CopyFrom(const Student& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tutorial.Student)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Student::IsInitialized() const {
  return true;
}

void Student::Swap(Student* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Student::InternalSwap(Student* other) {
  phone_.InternalSwap(&other->phone_);
  name_.Swap(&other->name_);
  email_.Swap(&other->email_);
  std::swap(id_, other->id_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Student::GetMetadata() const {
  protobuf_student_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_student_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Student

// uint64 id = 1;
void Student::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 Student::id() const {
  // @@protoc_insertion_point(field_get:tutorial.Student.id)
  return id_;
}
void Student::set_id(::google::protobuf::uint64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:tutorial.Student.id)
}

// string name = 2;
void Student::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Student::name() const {
  // @@protoc_insertion_point(field_get:tutorial.Student.name)
  return name_.GetNoArena();
}
void Student::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.Student.name)
}
#if LANG_CXX11
void Student::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tutorial.Student.name)
}
#endif
void Student::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Student.name)
}
void Student::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Student.name)
}
::std::string* Student::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.Student.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Student::release_name() {
  // @@protoc_insertion_point(field_release:tutorial.Student.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Student::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Student.name)
}

// string email = 3;
void Student::clear_email() {
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Student::email() const {
  // @@protoc_insertion_point(field_get:tutorial.Student.email)
  return email_.GetNoArena();
}
void Student::set_email(const ::std::string& value) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.Student.email)
}
#if LANG_CXX11
void Student::set_email(::std::string&& value) {
  
  email_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tutorial.Student.email)
}
#endif
void Student::set_email(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Student.email)
}
void Student::set_email(const char* value, size_t size) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Student.email)
}
::std::string* Student::mutable_email() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.Student.email)
  return email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Student::release_email() {
  // @@protoc_insertion_point(field_release:tutorial.Student.email)
  
  return email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Student::set_allocated_email(::std::string* email) {
  if (email != NULL) {
    
  } else {
    
  }
  email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Student.email)
}

// repeated .tutorial.Student.PhoneNumber phone = 4;
int Student::phone_size() const {
  return phone_.size();
}
void Student::clear_phone() {
  phone_.Clear();
}
const ::tutorial::Student_PhoneNumber& Student::phone(int index) const {
  // @@protoc_insertion_point(field_get:tutorial.Student.phone)
  return phone_.Get(index);
}
::tutorial::Student_PhoneNumber* Student::mutable_phone(int index) {
  // @@protoc_insertion_point(field_mutable:tutorial.Student.phone)
  return phone_.Mutable(index);
}
::tutorial::Student_PhoneNumber* Student::add_phone() {
  // @@protoc_insertion_point(field_add:tutorial.Student.phone)
  return phone_.Add();
}
::google::protobuf::RepeatedPtrField< ::tutorial::Student_PhoneNumber >*
Student::mutable_phone() {
  // @@protoc_insertion_point(field_mutable_list:tutorial.Student.phone)
  return &phone_;
}
const ::google::protobuf::RepeatedPtrField< ::tutorial::Student_PhoneNumber >&
Student::phone() const {
  // @@protoc_insertion_point(field_list:tutorial.Student.phone)
  return phone_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)
