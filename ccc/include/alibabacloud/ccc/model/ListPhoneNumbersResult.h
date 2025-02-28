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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTPHONENUMBERSRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTPHONENUMBERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListPhoneNumbersResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct PhoneNumber
					{
						struct SkillGroup
						{
							std::string instanceId;
							std::string displayName;
							std::string skillGroupId;
							std::string name;
						};
						std::string usage;
						std::string instanceId;
						std::string contactFlowId;
						std::string createTime;
						std::vector<PhoneNumber::SkillGroup> skillGroups;
						std::string city;
						std::string province;
						std::string provider;
						bool active;
						std::string number;
						std::string userId;
						std::string contactFlowName;
						std::string tags;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<PhoneNumber> list;
				};


				ListPhoneNumbersResult();
				explicit ListPhoneNumbersResult(const std::string &payload);
				~ListPhoneNumbersResult();
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int pageSize_;
				int pageNumber_;
				int httpStatusCode_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTPHONENUMBERSRESULT_H_