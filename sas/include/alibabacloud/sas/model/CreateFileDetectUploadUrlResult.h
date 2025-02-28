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

#ifndef ALIBABACLOUD_SAS_MODEL_CREATEFILEDETECTUPLOADURLRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_CREATEFILEDETECTUPLOADURLRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT CreateFileDetectUploadUrlResult : public ServiceResult
			{
			public:
				struct UploadUrList
				{
					struct Context
					{
						std::string policy;
						std::string accessId;
						std::string signature;
						std::string ossKey;
					};
					Context context;
					std::string internalUrl;
					std::string expire;
					std::string publicUrl;
					std::string hashKey;
					bool fileExist;
				};


				CreateFileDetectUploadUrlResult();
				explicit CreateFileDetectUploadUrlResult(const std::string &payload);
				~CreateFileDetectUploadUrlResult();
				std::vector<UploadUrList> getUploadUrlList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<UploadUrList> uploadUrlList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_CREATEFILEDETECTUPLOADURLRESULT_H_