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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTQUARAFILESRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTQUARAFILESRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeSuspEventQuaraFilesResult : public ServiceResult
			{
			public:
				struct QuaraFile
				{
					std::string path;
					std::string status;
					std::string modifyTime;
					std::string eventType;
					std::string instanceId;
					std::string ip;
					std::string eventName;
					std::string instanceName;
					std::string uuid;
					std::string internetIp;
					int id;
					std::string tag;
					std::string link;
					std::string md5;
				};


				DescribeSuspEventQuaraFilesResult();
				explicit DescribeSuspEventQuaraFilesResult(const std::string &payload);
				~DescribeSuspEventQuaraFilesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<QuaraFile> getQuaraFiles()const;
				int getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<QuaraFile> quaraFiles_;
				int count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTQUARAFILESRESULT_H_