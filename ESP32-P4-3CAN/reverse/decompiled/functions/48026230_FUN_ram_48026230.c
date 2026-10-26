/* Firmware entry: 0x48026230 */

undefined4
FUN_ram_48026230(uint param_1,uint param_2,int param_3,undefined1 param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x37) {
    if ((int)(param_1 - 0x20) < 0) {
      uVar5 = 0xffffffffU >> (param_1 & 0x1f) | 0xfffffe << (0x1f - param_1 & 0x1f);
    }
    else {
      uVar5 = 0x7fffff >> (param_1 - 0x20 & 0x1f);
    }
    if ((uVar5 & 1) != 0) {
      if (0x38 < param_2) {
        uVar7 = FUN_ram_4ff21a0a();
        uVar2 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                                );
        uVar3 = FUN_ram_48025e8c(param_2);
        uVar4 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): Invalid type: %s (%u) when setting pin %u\r\n",uVar4
                         ,uVar2,0x7e,"perimanSetPinBus",uVar3,param_2,param_1);
        return 0;
      }
      if (param_2 < 2) {
        if ((param_2 == 0) && (param_3 != 0)) {
          uVar7 = FUN_ram_4ff21a0a();
          uVar2 = FUN_ram_48025e50(
                                  "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                                  );
          uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
          FUN_ram_48027528("[%6u][E][%s:%u] %s(): Can\'t set a Bus to INIT Type (pin %u)\r\n",uVar3,
                           uVar2,0x86,"perimanSetPinBus",param_1);
          return 0;
        }
      }
      else if (param_3 == 0) {
        uVar7 = FUN_ram_4ff21a0a();
        uVar2 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                                );
        uVar3 = FUN_ram_48025e8c(param_2);
        uVar4 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): Bus is NULL for pin %u with type %s (%u)\r\n",uVar4,
                         uVar2,0x82,"perimanSetPinBus",param_1,uVar3,param_2);
        return 0;
      }
      iVar6 = param_1 * 0x10;
      uVar5 = *(uint *)(&DAT_ram_4ff5b52c + iVar6);
      if ((param_2 != uVar5) || (param_3 != *(int *)(&DAT_ram_4ff5b534 + iVar6))) {
        if (*(int *)(&DAT_ram_4ff5b534 + iVar6) != 0) {
          if (*(code **)(&DAT_ram_4ff5b89c + uVar5 * 4) == (code *)0x0) {
            uVar7 = FUN_ram_4ff21a0a();
            uVar2 = FUN_ram_48025e50(
                                    "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                                    );
            uVar3 = FUN_ram_48025e8c(uVar5);
            uVar4 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
            FUN_ram_48027528("[%6u][E][%s:%u] %s(): No deinit function for type %s (%u) (pin %u)\r\n"
                             ,uVar4,uVar2,0x93,"perimanSetPinBus",uVar3,uVar5,param_1);
            return 0;
          }
          iVar1 = (**(code **)(&DAT_ram_4ff5b89c + uVar5 * 4))();
          if (iVar1 == 0) {
            uVar7 = FUN_ram_4ff21a0a();
            uVar2 = FUN_ram_48025e50(
                                    "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                                    );
            uVar3 = FUN_ram_48025e8c(uVar5);
            uVar4 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
            FUN_ram_48027528("[%6u][E][%s:%u] %s(): Deinit function for previous bus type %s (%u) failed (pin %u)\r\n"
                             ,uVar4,uVar2,0x97,"perimanSetPinBus",uVar3,uVar5,param_1);
            return 0;
          }
        }
        *(uint *)(&DAT_ram_4ff5b52c + iVar6) = param_2;
        *(int *)(&DAT_ram_4ff5b534 + iVar6) = param_3;
        (&DAT_ram_4ff5b538)[iVar6] = param_4;
        (&DAT_ram_4ff5b539)[iVar6] = param_5;
        *(undefined4 *)(&DAT_ram_4ff5b530 + iVar6) = 0;
      }
      return 1;
    }
  }
  uVar7 = FUN_ram_4ff21a0a();
  uVar2 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-periman.c"
                          );
  uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): Invalid pin: %u\r\n",uVar3,uVar2,0x7a,"perimanSetPinBus",
                   param_1);
  return 0;
}


