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

#ifndef ALIBABACLOUD_EAS_MODEL_LISTRESOURCEINSTANCESRESULT_H_
#define ALIBABACLOUD_EAS_MODEL_LISTRESOURCEINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT ListResourceInstancesResult : public ServiceResult
			{
			public:
				struct InstancesItem
				{
					std::string instanceId;
					std::string createTime;
					std::string instanceUsedMemory;
					std::string instanceIp;
					int instanceGpuCount;
					std::string instanceName;
					std::string instanceMemory;
					int instanceCpuCount;
					int instanceUsedGpu;
					bool autoRenewal;
					std::string instanceStatus;
					std::string chargeType;
					std::string expiredTime;
					std::string instanceType;
					float instanceUsedCpu;
				};


				ListResourceInstancesResult();
				explicit ListResourceInstancesResult(const std::string &payload);
				~ListResourceInstancesResult();
				std::vector<InstancesItem> getInstances()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<InstancesItem> instances_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_LISTRESOURCEINSTANCESRESULT_H_