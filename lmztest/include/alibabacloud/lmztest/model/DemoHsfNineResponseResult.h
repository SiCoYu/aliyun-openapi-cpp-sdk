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

#ifndef ALIBABACLOUD_LMZTEST_MODEL_DEMOHSFNINERESPONSERESULT_H_
#define ALIBABACLOUD_LMZTEST_MODEL_DEMOHSFNINERESPONSERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/lmztest/LmzTestExport.h>

namespace AlibabaCloud
{
	namespace LmzTest
	{
		namespace Model
		{
			class ALIBABACLOUD_LMZTEST_EXPORT DemoHsfNineResponseResult : public ServiceResult
			{
			public:


				DemoHsfNineResponseResult();
				explicit DemoHsfNineResponseResult(const std::string &payload);
				~DemoHsfNineResponseResult();
				std::string getId()const;
				std::vector<std::string> getInfos()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string id_;
				std::vector<std::string> infos_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LMZTEST_MODEL_DEMOHSFNINERESPONSERESULT_H_