##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Lab6Puzzle
ConfigurationName      :=Debug
WorkspacePath          :=/home/student/Documents/Lab7NEW
ProjectPath            :=/home/student/Documents/puzzle-penneauk-bassoc/src
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=student
Date                   :=02/05/23
CodeLitePath           :=/home/student/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Lab6Puzzle.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/Board.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Room.cpp$(ObjectSuffix) $(IntermediateDirectory)/Virus.cpp$(ObjectSuffix) $(IntermediateDirectory)/Kernel.cpp$(ObjectSuffix) $(IntermediateDirectory)/Entity.cpp$(ObjectSuffix) $(IntermediateDirectory)/CorruptedFile.cpp$(ObjectSuffix) $(IntermediateDirectory)/Clippy.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Board.cpp$(ObjectSuffix): Board.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Board.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Board.cpp$(DependSuffix) -MM Board.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/puzzle-penneauk-bassoc/src/Board.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Board.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Board.cpp$(PreprocessSuffix): Board.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Board.cpp$(PreprocessSuffix) Board.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/puzzle-penneauk-bassoc/src/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Room.cpp$(ObjectSuffix): Room.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Room.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Room.cpp$(DependSuffix) -MM Room.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/puzzle-penneauk-bassoc/src/Room.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Room.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Room.cpp$(PreprocessSuffix): Room.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Room.cpp$(PreprocessSuffix) Room.cpp

$(IntermediateDirectory)/Virus.cpp$(ObjectSuffix): Virus.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Virus.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Virus.cpp$(DependSuffix) -MM Virus.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/puzzle-penneauk-bassoc/src/Virus.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Virus.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Virus.cpp$(PreprocessSuffix): Virus.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Virus.cpp$(PreprocessSuffix) Virus.cpp

$(IntermediateDirectory)/Kernel.cpp$(ObjectSuffix): Kernel.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Kernel.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Kernel.cpp$(DependSuffix) -MM Kernel.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/puzzle-penneauk-bassoc/src/Kernel.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Kernel.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Kernel.cpp$(PreprocessSuffix): Kernel.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Kernel.cpp$(PreprocessSuffix) Kernel.cpp

$(IntermediateDirectory)/Entity.cpp$(ObjectSuffix): Entity.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Entity.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Entity.cpp$(DependSuffix) -MM Entity.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/puzzle-penneauk-bassoc/src/Entity.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Entity.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Entity.cpp$(PreprocessSuffix): Entity.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Entity.cpp$(PreprocessSuffix) Entity.cpp

$(IntermediateDirectory)/CorruptedFile.cpp$(ObjectSuffix): CorruptedFile.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CorruptedFile.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CorruptedFile.cpp$(DependSuffix) -MM CorruptedFile.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/puzzle-penneauk-bassoc/src/CorruptedFile.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CorruptedFile.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CorruptedFile.cpp$(PreprocessSuffix): CorruptedFile.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CorruptedFile.cpp$(PreprocessSuffix) CorruptedFile.cpp

$(IntermediateDirectory)/Clippy.cpp$(ObjectSuffix): Clippy.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Clippy.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Clippy.cpp$(DependSuffix) -MM Clippy.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/student/Documents/puzzle-penneauk-bassoc/src/Clippy.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Clippy.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Clippy.cpp$(PreprocessSuffix): Clippy.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Clippy.cpp$(PreprocessSuffix) Clippy.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


