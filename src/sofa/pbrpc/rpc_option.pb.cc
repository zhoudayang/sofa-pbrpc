// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sofa/pbrpc/rpc_option.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "sofa/pbrpc/rpc_option.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace sofa {
namespace pbrpc {

namespace {

const ::google::protobuf::EnumDescriptor* CompressType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_sofa_2fpbrpc_2frpc_5foption_2eproto() {
  protobuf_AddDesc_sofa_2fpbrpc_2frpc_5foption_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "sofa/pbrpc/rpc_option.proto");
  GOOGLE_CHECK(file != NULL);
  CompressType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_sofa_2fpbrpc_2frpc_5foption_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_sofa_2fpbrpc_2frpc_5foption_2eproto() {
}

void protobuf_AddDesc_sofa_2fpbrpc_2frpc_5foption_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033sofa/pbrpc/rpc_option.proto\022\nsofa.pbrp"
    "c\032 google/protobuf/descriptor.proto*}\n\014C"
    "ompressType\022\024\n\020CompressTypeNone\020\000\022\024\n\020Com"
    "pressTypeGzip\020\001\022\024\n\020CompressTypeZlib\020\002\022\026\n"
    "\022CompressTypeSnappy\020\003\022\023\n\017CompressTypeLZ4"
    "\020\004:A\n\017service_timeout\022\037.google.protobuf."
    "ServiceOptions\030\240\234\001 \001(\003:\00510000:8\n\016method_"
    "timeout\022\036.google.protobuf.MethodOptions\030"
    "\240\234\001 \001(\003:k\n\025request_compress_type\022\036.googl"
    "e.protobuf.MethodOptions\030\241\234\001 \001(\0162\030.sofa."
    "pbrpc.CompressType:\020CompressTypeNone:l\n\026"
    "response_compress_type\022\036.google.protobuf"
    ".MethodOptions\030\242\234\001 \001(\0162\030.sofa.pbrpc.Comp"
    "ressType:\020CompressTypeNone", 546);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sofa/pbrpc/rpc_option.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::ServiceOptions::default_instance(),
    20000, 3, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MethodOptions::default_instance(),
    20000, 3, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterEnumExtension(
    &::google::protobuf::MethodOptions::default_instance(),
    20001, 14, false, false,
    &::sofa::pbrpc::CompressType_IsValid);
  ::google::protobuf::internal::ExtensionSet::RegisterEnumExtension(
    &::google::protobuf::MethodOptions::default_instance(),
    20002, 14, false, false,
    &::sofa::pbrpc::CompressType_IsValid);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_sofa_2fpbrpc_2frpc_5foption_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_sofa_2fpbrpc_2frpc_5foption_2eproto {
  StaticDescriptorInitializer_sofa_2fpbrpc_2frpc_5foption_2eproto() {
    protobuf_AddDesc_sofa_2fpbrpc_2frpc_5foption_2eproto();
  }
} static_descriptor_initializer_sofa_2fpbrpc_2frpc_5foption_2eproto_;
const ::google::protobuf::EnumDescriptor* CompressType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CompressType_descriptor_;
}
bool CompressType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int64 >, 3, false >
  service_timeout(kServiceTimeoutFieldNumber, GOOGLE_LONGLONG(10000));
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int64 >, 3, false >
  method_timeout(kMethodTimeoutFieldNumber, GOOGLE_LONGLONG(0));
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::google::protobuf::internal::EnumTypeTraits< ::sofa::pbrpc::CompressType, ::sofa::pbrpc::CompressType_IsValid>, 14, false >
  request_compress_type(kRequestCompressTypeFieldNumber, static_cast< ::sofa::pbrpc::CompressType >(0));
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::google::protobuf::internal::EnumTypeTraits< ::sofa::pbrpc::CompressType, ::sofa::pbrpc::CompressType_IsValid>, 14, false >
  response_compress_type(kResponseCompressTypeFieldNumber, static_cast< ::sofa::pbrpc::CompressType >(0));

// @@protoc_insertion_point(namespace_scope)

}  // namespace pbrpc
}  // namespace sofa

// @@protoc_insertion_point(global_scope)
