#include <cstdint>

namespace rbx {
    namespace offsets {
        namespace script {
            // !!! NOTE: The latest dump does not contain direct 'msbytecode' or 'lsbytecode' offsets.
            // These were likely replaced by a new structure. Search for "Bytecode" in the latest dump.
            // Previous values were: msbytecode = 0x168, lsbytecode = 0x1C0.
            constexpr std::uint64_t msbytecode = 0x168; // TODO: UPDATE MANUALLY
            constexpr std::uint64_t lsbytecode = 0x1C0; // TODO: UPDATE MANUALLY

            // The 'moduleflags' and 'iscore' offsets are also missing.
            // The Script namespace now only contains 'RequireBypass' at 0x0.
            // Previous values were: moduleflags = 0x1b0 - 0x4, iscore = 0x1b0.
            constexpr std::uint64_t moduleflags = 0x1b0 - 0x4; // TODO: UPDATE MANUALLY
            constexpr std::uint64_t iscore = 0x1b0;            // TODO: UPDATE MANUALLY
        }

        namespace datamodel {
            // The 'dm1' and 'dm2' offsets are not in the latest dump.
            // The new way to access DataModel is via FakeDataModel::Pointer -> RealDataModel (0x1D0).
            // Previous values were: dm1 = 0x118, dm2 = 0x1a8.
            constexpr std::uint64_t dm1 = 0x118; // TODO: UPDATE MANUALLY
            constexpr std::uint64_t dm2 = 0x1a8; // TODO: UPDATE MANUALLY

            constexpr std::uint64_t placeid = 0x1A0;      // Updated from 0x170 (DataModel::PlaceId)
            constexpr std::uint64_t gameloaded = 0x638;    // Updated from 0x3B1 (DataModel::GameLoaded)
        };

        namespace visualengine {
            // The 'engine' offset at 0x10 is not in the dump. VisualEngine is now accessed via VisualEngine::Pointer (0x7BD71F8).
            // The 'dimensions' offset at 0x730 is also not present.
            constexpr std::uint64_t engine = 0x10;         // TODO: UPDATE MANUALLY
            constexpr std::uint64_t viewmatrix = 0x140;     // Updated from 0x4C0 (VisualEngine::ViewMatrix)
            constexpr std::uint64_t dimensions = 0x730;     // TODO: UPDATE MANUALLY
        };

        namespace instance {
            constexpr std::uint64_t childsize = 0x8;        // Updated from 0x8 (Instance::ChildrenEnd)
            constexpr std::uint64_t children = 0x78;        // Updated from 0x70 (Instance::ChildrenStart)
            constexpr std::uint64_t parent = 0x70;          // Updated from 0x40 (Instance::Parent)
            constexpr std::uint64_t name = 0xB0;            // Updated from 0x68 (Instance::Name)
            constexpr std::uint64_t cname = 0x8;            // Updated from 0x8 (Instance::ClassName)
            constexpr std::uint64_t cdescriptor = 0x18;     // Updated from 0x18 (Instance::ClassDescriptor)
            constexpr std::uint64_t primitive = 0x148;      // Updated from 0x160 (BasePart::Primitive)

            namespace basepart {
                constexpr std::uint64_t position = 0xEC;    // Updated from 0x140 (Primitive::Position)
                constexpr std::uint64_t cframe = 0xC8;      // Updated from 0x11C (Primitive::CFrame)
                constexpr std::uint64_t size = 0x1B8;       // Updated from 0x2AC (Primitive::Size)
                constexpr std::uint64_t velocity = 0xF8;    // Updated from 0x14C (Primitive::AssemblyLinearVelocity)
                constexpr std::uint64_t rotvelocity = 0x104; // Updated from 0x158 (Primitive::AssemblyAngularVelocity)

                // Anchored and CanCollide are now part of a bitmask at 'PrimitiveFlags' (0x1B6).
                // Read the byte at 0x1B6 and check the bits: Anchored=0x2, CanCollide=0x8.
                constexpr std::uint64_t anchored = 0x1B6;    // Updated from 0x309
                constexpr std::uint64_t cancollide = 0x1B6;  // Updated from 0x30b
            };

            namespace instancevalue {
                constexpr std::uint64_t value = 0xD0;        // Updated from 0xC8 (Misc::Value)
            };
        };

        namespace player {
            constexpr std::uint64_t localplayer = 0x138;     // Updated from 0x1189 (Player::LocalPlayer)
            constexpr std::uint64_t character = 0x3A8;       // Updated from 0x2A0 (Player::ModelInstance)
            constexpr std::uint64_t userid = 0x2D8;          // Updated from 0x1E8 (Player::UserId)
            constexpr std::uint64_t displayname = 0x130;     // Updated from 0x100 (Player::DisplayName)
            constexpr std::uint64_t team = 0x2B0;            // Updated from 0x1D8 (Player::Team)
            constexpr std::uint64_t teamcolor = 0x32C;       // Updated from 0x274 (Player::TeamColor)
            constexpr std::uint64_t cameramaxzoom = 0x330;   // Updated from 0x238 (Player::CameraMaxZoomDist)
            constexpr std::uint64_t cameraminzoom = 0x334;   // Updated from 0x23C (Player::CameraMinZoomDist)

            namespace characterinstance {
                namespace humanoid {
                    constexpr std::uint64_t rigtype = 0x1CC;          // Updated from 0x1B8 (Humanoid::RigType)
                    constexpr std::uint64_t health = 0x194;           // Updated from 0x18C (Humanoid::Health)
                    constexpr std::uint64_t maxhealth = 0x1B4;        // Updated from 0x1AC (Humanoid::MaxHealth)
                    constexpr std::uint64_t walkspeed = 0x1DC;        // Updated from 0x1C0 (Humanoid::WalkSpeed)
                    constexpr std::uint64_t walkspeedcheck = 0x3C4;   // Updated from 0x398 (Humanoid::WalkSpeedCheck)
                    constexpr std::uint64_t jumppower = 0x1B0;        // Updated from 0x1A4 (Humanoid::JumpPower)
                    constexpr std::uint64_t hipheight = 0x1A0;        // Updated from 0x194 (Humanoid::HipHeight)
                };
            };
        };
    };
};
