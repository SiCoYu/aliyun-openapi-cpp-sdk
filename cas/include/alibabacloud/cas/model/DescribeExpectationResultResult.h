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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBEEXPECTATIONRESULTRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBEEXPECTATIONRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT DescribeExpectationResultResult : public ServiceResult
			{
			public:


				DescribeExpectationResultResult();
				explicit DescribeExpectationResultResult(const std::string &payload);
				~DescribeExpectationResultResult();
				std::string getCheckName()const;
				std::string getModifiedTime()const;
				std::string getProcessStatus()const;
				std::string getExpectationType()const;
				std::string getCheckType()const;
				std::string getCheckName1()const;
				std::string getCheckName2()const;
				std::string getErrorMessage()const;
				std::string getCheckValue()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string checkName_;
				std::string modifiedTime_;
				std::string processStatus_;
				std::string expectationType_;
				std::string checkType_;
				std::string checkName1_;
				std::string checkName2_;
				std::string errorMessage_;
				std::string checkValue_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBEEXPECTATIONRESULTRESULT_H_