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

#ifndef ALIBABACLOUD_OOS_MODEL_UPDATEPARAMETERRESULT_H_
#define ALIBABACLOUD_OOS_MODEL_UPDATEPARAMETERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT UpdateParameterResult : public ServiceResult
			{
			public:
				struct _Parameter
				{
					std::string updatedBy;
					std::string type;
					std::string createdBy;
					std::string description;
					std::string updatedDate;
					int parameterVersion;
					std::string createdDate;
					std::string id;
					std::string name;
					std::string shareType;
				};


				UpdateParameterResult();
				explicit UpdateParameterResult(const std::string &payload);
				~UpdateParameterResult();
				_Parameter get_Parameter()const;

			protected:
				void parse(const std::string &payload);
			private:
				_Parameter _parameter_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_UPDATEPARAMETERRESULT_H_