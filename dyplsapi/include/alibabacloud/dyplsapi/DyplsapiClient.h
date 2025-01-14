/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_DYPLSAPI_DYPLSAPICLIENT_H_
#define ALIBABACLOUD_DYPLSAPI_DYPLSAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DyplsapiExport.h"
#include "model/AddAxnTrackNoRequest.h"
#include "model/AddAxnTrackNoResult.h"
#include "model/AddSecretBlacklistRequest.h"
#include "model/AddSecretBlacklistResult.h"
#include "model/BindAxbRequest.h"
#include "model/BindAxbResult.h"
#include "model/BindAxgRequest.h"
#include "model/BindAxgResult.h"
#include "model/BindAxnRequest.h"
#include "model/BindAxnResult.h"
#include "model/BindAxnExtensionRequest.h"
#include "model/BindAxnExtensionResult.h"
#include "model/BuySecretNoRequest.h"
#include "model/BuySecretNoResult.h"
#include "model/CancelPickUpWaybillRequest.h"
#include "model/CancelPickUpWaybillResult.h"
#include "model/ConfirmSendSmsRequest.h"
#include "model/ConfirmSendSmsResult.h"
#include "model/CreateAxgGroupRequest.h"
#include "model/CreateAxgGroupResult.h"
#include "model/CreatePickUpWaybillRequest.h"
#include "model/CreatePickUpWaybillResult.h"
#include "model/CreateSubscriptionRequest.h"
#include "model/CreateSubscriptionResult.h"
#include "model/DeleteSecretBlacklistRequest.h"
#include "model/DeleteSecretBlacklistResult.h"
#include "model/GetFaceVerifyRequest.h"
#include "model/GetFaceVerifyResult.h"
#include "model/GetSecretAsrDetailRequest.h"
#include "model/GetSecretAsrDetailResult.h"
#include "model/GetSubscriptionDetailRequest.h"
#include "model/GetSubscriptionDetailResult.h"
#include "model/GetTotalPublicUrlRequest.h"
#include "model/GetTotalPublicUrlResult.h"
#include "model/InitFaceVerifyRequest.h"
#include "model/InitFaceVerifyResult.h"
#include "model/LockSecretNoRequest.h"
#include "model/LockSecretNoResult.h"
#include "model/OperateAxgGroupRequest.h"
#include "model/OperateAxgGroupResult.h"
#include "model/OperateBlackNoRequest.h"
#include "model/OperateBlackNoResult.h"
#include "model/QueryCallStatusRequest.h"
#include "model/QueryCallStatusResult.h"
#include "model/QueryPhoneNoAByTrackNoRequest.h"
#include "model/QueryPhoneNoAByTrackNoResult.h"
#include "model/QueryRecordFileDownloadUrlRequest.h"
#include "model/QueryRecordFileDownloadUrlResult.h"
#include "model/QuerySecretNoDetailRequest.h"
#include "model/QuerySecretNoDetailResult.h"
#include "model/QuerySecretNoRemainRequest.h"
#include "model/QuerySecretNoRemainResult.h"
#include "model/QuerySubsIdRequest.h"
#include "model/QuerySubsIdResult.h"
#include "model/QuerySubscriptionDetailRequest.h"
#include "model/QuerySubscriptionDetailResult.h"
#include "model/ReleaseSecretNoRequest.h"
#include "model/ReleaseSecretNoResult.h"
#include "model/UnbindSubscriptionRequest.h"
#include "model/UnbindSubscriptionResult.h"
#include "model/UnlockSecretNoRequest.h"
#include "model/UnlockSecretNoResult.h"
#include "model/UpdateDefaultBRequest.h"
#include "model/UpdateDefaultBResult.h"
#include "model/UpdatePhoneNumberRequest.h"
#include "model/UpdatePhoneNumberResult.h"
#include "model/UpdatePhoneSwitchRequest.h"
#include "model/UpdatePhoneSwitchResult.h"
#include "model/UpdateSubscriptionRequest.h"
#include "model/UpdateSubscriptionResult.h"


namespace AlibabaCloud
{
	namespace Dyplsapi
	{
		class ALIBABACLOUD_DYPLSAPI_EXPORT DyplsapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddAxnTrackNoResult> AddAxnTrackNoOutcome;
			typedef std::future<AddAxnTrackNoOutcome> AddAxnTrackNoOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::AddAxnTrackNoRequest&, const AddAxnTrackNoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAxnTrackNoAsyncHandler;
			typedef Outcome<Error, Model::AddSecretBlacklistResult> AddSecretBlacklistOutcome;
			typedef std::future<AddSecretBlacklistOutcome> AddSecretBlacklistOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::AddSecretBlacklistRequest&, const AddSecretBlacklistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSecretBlacklistAsyncHandler;
			typedef Outcome<Error, Model::BindAxbResult> BindAxbOutcome;
			typedef std::future<BindAxbOutcome> BindAxbOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::BindAxbRequest&, const BindAxbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindAxbAsyncHandler;
			typedef Outcome<Error, Model::BindAxgResult> BindAxgOutcome;
			typedef std::future<BindAxgOutcome> BindAxgOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::BindAxgRequest&, const BindAxgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindAxgAsyncHandler;
			typedef Outcome<Error, Model::BindAxnResult> BindAxnOutcome;
			typedef std::future<BindAxnOutcome> BindAxnOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::BindAxnRequest&, const BindAxnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindAxnAsyncHandler;
			typedef Outcome<Error, Model::BindAxnExtensionResult> BindAxnExtensionOutcome;
			typedef std::future<BindAxnExtensionOutcome> BindAxnExtensionOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::BindAxnExtensionRequest&, const BindAxnExtensionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindAxnExtensionAsyncHandler;
			typedef Outcome<Error, Model::BuySecretNoResult> BuySecretNoOutcome;
			typedef std::future<BuySecretNoOutcome> BuySecretNoOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::BuySecretNoRequest&, const BuySecretNoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BuySecretNoAsyncHandler;
			typedef Outcome<Error, Model::CancelPickUpWaybillResult> CancelPickUpWaybillOutcome;
			typedef std::future<CancelPickUpWaybillOutcome> CancelPickUpWaybillOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::CancelPickUpWaybillRequest&, const CancelPickUpWaybillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelPickUpWaybillAsyncHandler;
			typedef Outcome<Error, Model::ConfirmSendSmsResult> ConfirmSendSmsOutcome;
			typedef std::future<ConfirmSendSmsOutcome> ConfirmSendSmsOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::ConfirmSendSmsRequest&, const ConfirmSendSmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmSendSmsAsyncHandler;
			typedef Outcome<Error, Model::CreateAxgGroupResult> CreateAxgGroupOutcome;
			typedef std::future<CreateAxgGroupOutcome> CreateAxgGroupOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::CreateAxgGroupRequest&, const CreateAxgGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAxgGroupAsyncHandler;
			typedef Outcome<Error, Model::CreatePickUpWaybillResult> CreatePickUpWaybillOutcome;
			typedef std::future<CreatePickUpWaybillOutcome> CreatePickUpWaybillOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::CreatePickUpWaybillRequest&, const CreatePickUpWaybillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePickUpWaybillAsyncHandler;
			typedef Outcome<Error, Model::CreateSubscriptionResult> CreateSubscriptionOutcome;
			typedef std::future<CreateSubscriptionOutcome> CreateSubscriptionOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::CreateSubscriptionRequest&, const CreateSubscriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubscriptionAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecretBlacklistResult> DeleteSecretBlacklistOutcome;
			typedef std::future<DeleteSecretBlacklistOutcome> DeleteSecretBlacklistOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::DeleteSecretBlacklistRequest&, const DeleteSecretBlacklistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretBlacklistAsyncHandler;
			typedef Outcome<Error, Model::GetFaceVerifyResult> GetFaceVerifyOutcome;
			typedef std::future<GetFaceVerifyOutcome> GetFaceVerifyOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::GetFaceVerifyRequest&, const GetFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::GetSecretAsrDetailResult> GetSecretAsrDetailOutcome;
			typedef std::future<GetSecretAsrDetailOutcome> GetSecretAsrDetailOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::GetSecretAsrDetailRequest&, const GetSecretAsrDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecretAsrDetailAsyncHandler;
			typedef Outcome<Error, Model::GetSubscriptionDetailResult> GetSubscriptionDetailOutcome;
			typedef std::future<GetSubscriptionDetailOutcome> GetSubscriptionDetailOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::GetSubscriptionDetailRequest&, const GetSubscriptionDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSubscriptionDetailAsyncHandler;
			typedef Outcome<Error, Model::GetTotalPublicUrlResult> GetTotalPublicUrlOutcome;
			typedef std::future<GetTotalPublicUrlOutcome> GetTotalPublicUrlOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::GetTotalPublicUrlRequest&, const GetTotalPublicUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTotalPublicUrlAsyncHandler;
			typedef Outcome<Error, Model::InitFaceVerifyResult> InitFaceVerifyOutcome;
			typedef std::future<InitFaceVerifyOutcome> InitFaceVerifyOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::InitFaceVerifyRequest&, const InitFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::LockSecretNoResult> LockSecretNoOutcome;
			typedef std::future<LockSecretNoOutcome> LockSecretNoOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::LockSecretNoRequest&, const LockSecretNoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LockSecretNoAsyncHandler;
			typedef Outcome<Error, Model::OperateAxgGroupResult> OperateAxgGroupOutcome;
			typedef std::future<OperateAxgGroupOutcome> OperateAxgGroupOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::OperateAxgGroupRequest&, const OperateAxgGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateAxgGroupAsyncHandler;
			typedef Outcome<Error, Model::OperateBlackNoResult> OperateBlackNoOutcome;
			typedef std::future<OperateBlackNoOutcome> OperateBlackNoOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::OperateBlackNoRequest&, const OperateBlackNoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateBlackNoAsyncHandler;
			typedef Outcome<Error, Model::QueryCallStatusResult> QueryCallStatusOutcome;
			typedef std::future<QueryCallStatusOutcome> QueryCallStatusOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::QueryCallStatusRequest&, const QueryCallStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCallStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryPhoneNoAByTrackNoResult> QueryPhoneNoAByTrackNoOutcome;
			typedef std::future<QueryPhoneNoAByTrackNoOutcome> QueryPhoneNoAByTrackNoOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::QueryPhoneNoAByTrackNoRequest&, const QueryPhoneNoAByTrackNoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPhoneNoAByTrackNoAsyncHandler;
			typedef Outcome<Error, Model::QueryRecordFileDownloadUrlResult> QueryRecordFileDownloadUrlOutcome;
			typedef std::future<QueryRecordFileDownloadUrlOutcome> QueryRecordFileDownloadUrlOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::QueryRecordFileDownloadUrlRequest&, const QueryRecordFileDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecordFileDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::QuerySecretNoDetailResult> QuerySecretNoDetailOutcome;
			typedef std::future<QuerySecretNoDetailOutcome> QuerySecretNoDetailOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::QuerySecretNoDetailRequest&, const QuerySecretNoDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySecretNoDetailAsyncHandler;
			typedef Outcome<Error, Model::QuerySecretNoRemainResult> QuerySecretNoRemainOutcome;
			typedef std::future<QuerySecretNoRemainOutcome> QuerySecretNoRemainOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::QuerySecretNoRemainRequest&, const QuerySecretNoRemainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySecretNoRemainAsyncHandler;
			typedef Outcome<Error, Model::QuerySubsIdResult> QuerySubsIdOutcome;
			typedef std::future<QuerySubsIdOutcome> QuerySubsIdOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::QuerySubsIdRequest&, const QuerySubsIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySubsIdAsyncHandler;
			typedef Outcome<Error, Model::QuerySubscriptionDetailResult> QuerySubscriptionDetailOutcome;
			typedef std::future<QuerySubscriptionDetailOutcome> QuerySubscriptionDetailOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::QuerySubscriptionDetailRequest&, const QuerySubscriptionDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySubscriptionDetailAsyncHandler;
			typedef Outcome<Error, Model::ReleaseSecretNoResult> ReleaseSecretNoOutcome;
			typedef std::future<ReleaseSecretNoOutcome> ReleaseSecretNoOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::ReleaseSecretNoRequest&, const ReleaseSecretNoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseSecretNoAsyncHandler;
			typedef Outcome<Error, Model::UnbindSubscriptionResult> UnbindSubscriptionOutcome;
			typedef std::future<UnbindSubscriptionOutcome> UnbindSubscriptionOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::UnbindSubscriptionRequest&, const UnbindSubscriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindSubscriptionAsyncHandler;
			typedef Outcome<Error, Model::UnlockSecretNoResult> UnlockSecretNoOutcome;
			typedef std::future<UnlockSecretNoOutcome> UnlockSecretNoOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::UnlockSecretNoRequest&, const UnlockSecretNoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockSecretNoAsyncHandler;
			typedef Outcome<Error, Model::UpdateDefaultBResult> UpdateDefaultBOutcome;
			typedef std::future<UpdateDefaultBOutcome> UpdateDefaultBOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::UpdateDefaultBRequest&, const UpdateDefaultBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDefaultBAsyncHandler;
			typedef Outcome<Error, Model::UpdatePhoneNumberResult> UpdatePhoneNumberOutcome;
			typedef std::future<UpdatePhoneNumberOutcome> UpdatePhoneNumberOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::UpdatePhoneNumberRequest&, const UpdatePhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::UpdatePhoneSwitchResult> UpdatePhoneSwitchOutcome;
			typedef std::future<UpdatePhoneSwitchOutcome> UpdatePhoneSwitchOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::UpdatePhoneSwitchRequest&, const UpdatePhoneSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePhoneSwitchAsyncHandler;
			typedef Outcome<Error, Model::UpdateSubscriptionResult> UpdateSubscriptionOutcome;
			typedef std::future<UpdateSubscriptionOutcome> UpdateSubscriptionOutcomeCallable;
			typedef std::function<void(const DyplsapiClient*, const Model::UpdateSubscriptionRequest&, const UpdateSubscriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSubscriptionAsyncHandler;

			DyplsapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DyplsapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DyplsapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DyplsapiClient();
			AddAxnTrackNoOutcome addAxnTrackNo(const Model::AddAxnTrackNoRequest &request)const;
			void addAxnTrackNoAsync(const Model::AddAxnTrackNoRequest& request, const AddAxnTrackNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAxnTrackNoOutcomeCallable addAxnTrackNoCallable(const Model::AddAxnTrackNoRequest& request) const;
			AddSecretBlacklistOutcome addSecretBlacklist(const Model::AddSecretBlacklistRequest &request)const;
			void addSecretBlacklistAsync(const Model::AddSecretBlacklistRequest& request, const AddSecretBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSecretBlacklistOutcomeCallable addSecretBlacklistCallable(const Model::AddSecretBlacklistRequest& request) const;
			BindAxbOutcome bindAxb(const Model::BindAxbRequest &request)const;
			void bindAxbAsync(const Model::BindAxbRequest& request, const BindAxbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindAxbOutcomeCallable bindAxbCallable(const Model::BindAxbRequest& request) const;
			BindAxgOutcome bindAxg(const Model::BindAxgRequest &request)const;
			void bindAxgAsync(const Model::BindAxgRequest& request, const BindAxgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindAxgOutcomeCallable bindAxgCallable(const Model::BindAxgRequest& request) const;
			BindAxnOutcome bindAxn(const Model::BindAxnRequest &request)const;
			void bindAxnAsync(const Model::BindAxnRequest& request, const BindAxnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindAxnOutcomeCallable bindAxnCallable(const Model::BindAxnRequest& request) const;
			BindAxnExtensionOutcome bindAxnExtension(const Model::BindAxnExtensionRequest &request)const;
			void bindAxnExtensionAsync(const Model::BindAxnExtensionRequest& request, const BindAxnExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindAxnExtensionOutcomeCallable bindAxnExtensionCallable(const Model::BindAxnExtensionRequest& request) const;
			BuySecretNoOutcome buySecretNo(const Model::BuySecretNoRequest &request)const;
			void buySecretNoAsync(const Model::BuySecretNoRequest& request, const BuySecretNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BuySecretNoOutcomeCallable buySecretNoCallable(const Model::BuySecretNoRequest& request) const;
			CancelPickUpWaybillOutcome cancelPickUpWaybill(const Model::CancelPickUpWaybillRequest &request)const;
			void cancelPickUpWaybillAsync(const Model::CancelPickUpWaybillRequest& request, const CancelPickUpWaybillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelPickUpWaybillOutcomeCallable cancelPickUpWaybillCallable(const Model::CancelPickUpWaybillRequest& request) const;
			ConfirmSendSmsOutcome confirmSendSms(const Model::ConfirmSendSmsRequest &request)const;
			void confirmSendSmsAsync(const Model::ConfirmSendSmsRequest& request, const ConfirmSendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmSendSmsOutcomeCallable confirmSendSmsCallable(const Model::ConfirmSendSmsRequest& request) const;
			CreateAxgGroupOutcome createAxgGroup(const Model::CreateAxgGroupRequest &request)const;
			void createAxgGroupAsync(const Model::CreateAxgGroupRequest& request, const CreateAxgGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAxgGroupOutcomeCallable createAxgGroupCallable(const Model::CreateAxgGroupRequest& request) const;
			CreatePickUpWaybillOutcome createPickUpWaybill(const Model::CreatePickUpWaybillRequest &request)const;
			void createPickUpWaybillAsync(const Model::CreatePickUpWaybillRequest& request, const CreatePickUpWaybillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePickUpWaybillOutcomeCallable createPickUpWaybillCallable(const Model::CreatePickUpWaybillRequest& request) const;
			CreateSubscriptionOutcome createSubscription(const Model::CreateSubscriptionRequest &request)const;
			void createSubscriptionAsync(const Model::CreateSubscriptionRequest& request, const CreateSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSubscriptionOutcomeCallable createSubscriptionCallable(const Model::CreateSubscriptionRequest& request) const;
			DeleteSecretBlacklistOutcome deleteSecretBlacklist(const Model::DeleteSecretBlacklistRequest &request)const;
			void deleteSecretBlacklistAsync(const Model::DeleteSecretBlacklistRequest& request, const DeleteSecretBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecretBlacklistOutcomeCallable deleteSecretBlacklistCallable(const Model::DeleteSecretBlacklistRequest& request) const;
			GetFaceVerifyOutcome getFaceVerify(const Model::GetFaceVerifyRequest &request)const;
			void getFaceVerifyAsync(const Model::GetFaceVerifyRequest& request, const GetFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFaceVerifyOutcomeCallable getFaceVerifyCallable(const Model::GetFaceVerifyRequest& request) const;
			GetSecretAsrDetailOutcome getSecretAsrDetail(const Model::GetSecretAsrDetailRequest &request)const;
			void getSecretAsrDetailAsync(const Model::GetSecretAsrDetailRequest& request, const GetSecretAsrDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecretAsrDetailOutcomeCallable getSecretAsrDetailCallable(const Model::GetSecretAsrDetailRequest& request) const;
			GetSubscriptionDetailOutcome getSubscriptionDetail(const Model::GetSubscriptionDetailRequest &request)const;
			void getSubscriptionDetailAsync(const Model::GetSubscriptionDetailRequest& request, const GetSubscriptionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSubscriptionDetailOutcomeCallable getSubscriptionDetailCallable(const Model::GetSubscriptionDetailRequest& request) const;
			GetTotalPublicUrlOutcome getTotalPublicUrl(const Model::GetTotalPublicUrlRequest &request)const;
			void getTotalPublicUrlAsync(const Model::GetTotalPublicUrlRequest& request, const GetTotalPublicUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTotalPublicUrlOutcomeCallable getTotalPublicUrlCallable(const Model::GetTotalPublicUrlRequest& request) const;
			InitFaceVerifyOutcome initFaceVerify(const Model::InitFaceVerifyRequest &request)const;
			void initFaceVerifyAsync(const Model::InitFaceVerifyRequest& request, const InitFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitFaceVerifyOutcomeCallable initFaceVerifyCallable(const Model::InitFaceVerifyRequest& request) const;
			LockSecretNoOutcome lockSecretNo(const Model::LockSecretNoRequest &request)const;
			void lockSecretNoAsync(const Model::LockSecretNoRequest& request, const LockSecretNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LockSecretNoOutcomeCallable lockSecretNoCallable(const Model::LockSecretNoRequest& request) const;
			OperateAxgGroupOutcome operateAxgGroup(const Model::OperateAxgGroupRequest &request)const;
			void operateAxgGroupAsync(const Model::OperateAxgGroupRequest& request, const OperateAxgGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateAxgGroupOutcomeCallable operateAxgGroupCallable(const Model::OperateAxgGroupRequest& request) const;
			OperateBlackNoOutcome operateBlackNo(const Model::OperateBlackNoRequest &request)const;
			void operateBlackNoAsync(const Model::OperateBlackNoRequest& request, const OperateBlackNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateBlackNoOutcomeCallable operateBlackNoCallable(const Model::OperateBlackNoRequest& request) const;
			QueryCallStatusOutcome queryCallStatus(const Model::QueryCallStatusRequest &request)const;
			void queryCallStatusAsync(const Model::QueryCallStatusRequest& request, const QueryCallStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCallStatusOutcomeCallable queryCallStatusCallable(const Model::QueryCallStatusRequest& request) const;
			QueryPhoneNoAByTrackNoOutcome queryPhoneNoAByTrackNo(const Model::QueryPhoneNoAByTrackNoRequest &request)const;
			void queryPhoneNoAByTrackNoAsync(const Model::QueryPhoneNoAByTrackNoRequest& request, const QueryPhoneNoAByTrackNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPhoneNoAByTrackNoOutcomeCallable queryPhoneNoAByTrackNoCallable(const Model::QueryPhoneNoAByTrackNoRequest& request) const;
			QueryRecordFileDownloadUrlOutcome queryRecordFileDownloadUrl(const Model::QueryRecordFileDownloadUrlRequest &request)const;
			void queryRecordFileDownloadUrlAsync(const Model::QueryRecordFileDownloadUrlRequest& request, const QueryRecordFileDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecordFileDownloadUrlOutcomeCallable queryRecordFileDownloadUrlCallable(const Model::QueryRecordFileDownloadUrlRequest& request) const;
			QuerySecretNoDetailOutcome querySecretNoDetail(const Model::QuerySecretNoDetailRequest &request)const;
			void querySecretNoDetailAsync(const Model::QuerySecretNoDetailRequest& request, const QuerySecretNoDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySecretNoDetailOutcomeCallable querySecretNoDetailCallable(const Model::QuerySecretNoDetailRequest& request) const;
			QuerySecretNoRemainOutcome querySecretNoRemain(const Model::QuerySecretNoRemainRequest &request)const;
			void querySecretNoRemainAsync(const Model::QuerySecretNoRemainRequest& request, const QuerySecretNoRemainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySecretNoRemainOutcomeCallable querySecretNoRemainCallable(const Model::QuerySecretNoRemainRequest& request) const;
			QuerySubsIdOutcome querySubsId(const Model::QuerySubsIdRequest &request)const;
			void querySubsIdAsync(const Model::QuerySubsIdRequest& request, const QuerySubsIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySubsIdOutcomeCallable querySubsIdCallable(const Model::QuerySubsIdRequest& request) const;
			QuerySubscriptionDetailOutcome querySubscriptionDetail(const Model::QuerySubscriptionDetailRequest &request)const;
			void querySubscriptionDetailAsync(const Model::QuerySubscriptionDetailRequest& request, const QuerySubscriptionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySubscriptionDetailOutcomeCallable querySubscriptionDetailCallable(const Model::QuerySubscriptionDetailRequest& request) const;
			ReleaseSecretNoOutcome releaseSecretNo(const Model::ReleaseSecretNoRequest &request)const;
			void releaseSecretNoAsync(const Model::ReleaseSecretNoRequest& request, const ReleaseSecretNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseSecretNoOutcomeCallable releaseSecretNoCallable(const Model::ReleaseSecretNoRequest& request) const;
			UnbindSubscriptionOutcome unbindSubscription(const Model::UnbindSubscriptionRequest &request)const;
			void unbindSubscriptionAsync(const Model::UnbindSubscriptionRequest& request, const UnbindSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindSubscriptionOutcomeCallable unbindSubscriptionCallable(const Model::UnbindSubscriptionRequest& request) const;
			UnlockSecretNoOutcome unlockSecretNo(const Model::UnlockSecretNoRequest &request)const;
			void unlockSecretNoAsync(const Model::UnlockSecretNoRequest& request, const UnlockSecretNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockSecretNoOutcomeCallable unlockSecretNoCallable(const Model::UnlockSecretNoRequest& request) const;
			UpdateDefaultBOutcome updateDefaultB(const Model::UpdateDefaultBRequest &request)const;
			void updateDefaultBAsync(const Model::UpdateDefaultBRequest& request, const UpdateDefaultBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDefaultBOutcomeCallable updateDefaultBCallable(const Model::UpdateDefaultBRequest& request) const;
			UpdatePhoneNumberOutcome updatePhoneNumber(const Model::UpdatePhoneNumberRequest &request)const;
			void updatePhoneNumberAsync(const Model::UpdatePhoneNumberRequest& request, const UpdatePhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePhoneNumberOutcomeCallable updatePhoneNumberCallable(const Model::UpdatePhoneNumberRequest& request) const;
			UpdatePhoneSwitchOutcome updatePhoneSwitch(const Model::UpdatePhoneSwitchRequest &request)const;
			void updatePhoneSwitchAsync(const Model::UpdatePhoneSwitchRequest& request, const UpdatePhoneSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePhoneSwitchOutcomeCallable updatePhoneSwitchCallable(const Model::UpdatePhoneSwitchRequest& request) const;
			UpdateSubscriptionOutcome updateSubscription(const Model::UpdateSubscriptionRequest &request)const;
			void updateSubscriptionAsync(const Model::UpdateSubscriptionRequest& request, const UpdateSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSubscriptionOutcomeCallable updateSubscriptionCallable(const Model::UpdateSubscriptionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYPLSAPI_DYPLSAPICLIENT_H_
