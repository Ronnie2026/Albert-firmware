/* Firmware entry: 0x480a6a7e */

undefined4 FUN_ram_480a6a7e(int param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48129d0c();
  if (iVar2 != 0) {
    piVar8 = *(int **)(param_1 + 8);
    while( true ) {
      if (piVar8 == (int *)0x0) {
        uVar4 = FUN_ram_48129c8a(param_1,"config");
        iVar2 = FUN_ram_480a4f4a(uVar4,param_2);
        if (iVar2 != 0) {
          uVar4 = FUN_ram_48129c8a(param_1,"torque");
          iVar2 = FUN_ram_480a6468(uVar4,param_2 + 0xa4);
          if (iVar2 != 0) {
            iVar2 = FUN_ram_48129c8a(param_1,"battery");
            iVar3 = FUN_ram_48129d0c();
            if (iVar3 != 0) {
              for (piVar8 = *(int **)(iVar2 + 8); piVar8 != (int *)0x0; piVar8 = (int *)*piVar8) {
                iVar3 = piVar8[8];
                if ((iVar3 == 0) ||
                   ((iVar5 = FUN_ram_4ff453ae(iVar3,"batteryPreheatEnabled"), iVar5 != 0 &&
                    (iVar3 = FUN_ram_4ff453ae(iVar3,"batteryPreheatDurationMin"), iVar3 != 0)))) {
                  return 0;
                }
              }
              uVar4 = FUN_ram_48129c8a(iVar2,"batteryPreheatEnabled");
              iVar3 = FUN_ram_48129cb4();
              if (iVar3 != 0) {
                iVar3 = FUN_ram_48129ca2(uVar4);
                *(bool *)(param_2 + 0xec) = iVar3 != 0;
                iVar2 = FUN_ram_480a4d0a(iVar2,"batteryPreheatDurationMin",0xff,0,param_2 + 0xed);
                if ((iVar2 != 0) &&
                   ((*(byte *)(param_2 + 0xed) == 0xf ||
                    ((uVar7 = *(byte *)(param_2 + 0xed) - 0x1e, (uVar7 & 0xff) < 0x1f &&
                     ((0x40008001U >> (uVar7 & 0x1f) & 1) != 0)))))) {
                  uVar4 = FUN_ram_48129c8a(param_1,"rearFog");
                  iVar2 = FUN_ram_480a5a20(uVar4,param_2 + 0xee);
                  if (iVar2 != 0) {
                    uVar4 = FUN_ram_48129c8a(param_1,"ussRadar");
                    iVar2 = FUN_ram_480a5b84(uVar4,param_2 + 0xf6);
                    if (iVar2 != 0) {
                      uVar4 = FUN_ram_48129c8a(param_1,"ambientDefault");
                      iVar2 = FUN_ram_480a5ea0(uVar4,param_2 + 0xfe);
                      if (iVar2 != 0) {
                        uVar4 = FUN_ram_48129c8a(param_1,"speedTargetDefault");
                        iVar2 = FUN_ram_4807861a(uVar4,param_2 + 0x134);
                        if (((iVar2 != 0) &&
                            (iVar2 = FUN_ram_4807806e(param_1,"apAutoOffEnabled",param_2 + 0x172),
                            iVar2 != 0)) &&
                           (iVar2 = FUN_ram_4807806e(param_1,"cloudEnabled",param_2 + 0x173),
                           iVar2 != 0)) {
                          uVar4 = FUN_ram_480a4e2a(param_1,"cloudIntervalSec",0xffff,0,
                                                   param_2 + 0x174);
                          return uVar4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return 0;
      }
      iVar2 = piVar8[8];
      if (iVar2 == 0) break;
      ppuVar1 = &PTR_s_config_ram_481bffb4_8_ram_48222784;
      while( true ) {
        puVar6 = *ppuVar1;
        ppuVar1 = ppuVar1 + 1;
        iVar3 = FUN_ram_4ff453ae(iVar2,puVar6);
        if (iVar3 == 0) break;
        if (ppuVar1 == &PTR_s_id_ram_481be3c0_0x14_ram_482227ac) {
          return 0;
        }
      }
      piVar8 = (int *)*piVar8;
    }
  }
  return 0;
}


