/* Firmware entry: 0x480a5a20 */

bool FUN_ram_480a5a20(int param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int *piVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48129d0c();
  if (iVar2 != 0) {
    for (piVar6 = *(int **)(param_1 + 8); piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
      iVar2 = piVar6[8];
      if (iVar2 == 0) {
        return false;
      }
      ppuVar1 = &PTR_s_enabled_ram_481ccbd8_8_ram_4822287c;
      while( true ) {
        puVar5 = *ppuVar1;
        ppuVar1 = ppuVar1 + 1;
        iVar3 = FUN_ram_4ff453ae(iVar2,puVar5);
        if (iVar3 == 0) break;
        if (ppuVar1 == &PTR_s_enabled_ram_481ccbd8_8_ram_48222894) {
          return false;
        }
      }
    }
    uVar4 = FUN_ram_48129c8a(param_1,"enabled");
    iVar2 = FUN_ram_48129cb4();
    if (iVar2 != 0) {
      iVar2 = FUN_ram_48129ca2(uVar4);
      *(bool *)param_2 = iVar2 != 0;
      uVar4 = FUN_ram_48129c8a(param_1,"reverseWarningEnabled");
      iVar2 = FUN_ram_48129cb4();
      if (iVar2 != 0) {
        iVar2 = FUN_ram_48129ca2(uVar4);
        *(bool *)(param_2 + 1) = iVar2 != 0;
        uVar4 = FUN_ram_48129c8a(param_1,"rearFogPilotEnabled");
        iVar2 = FUN_ram_48129cb4();
        if (iVar2 != 0) {
          iVar2 = FUN_ram_48129ca2(uVar4);
          *(bool *)(param_2 + 2) = iVar2 != 0;
          iVar2 = FUN_ram_4807806e(param_1,"reverseRearFogSteadyEnabled",param_2 + 3);
          if ((((iVar2 != 0) &&
               (iVar2 = FUN_ram_480a4e2a(param_1,"mildDecelCx100",0xffff,0,param_2 + 4), iVar2 != 0)
               ) && (iVar2 = FUN_ram_480a4e2a(param_1,"hardDecelCx100",0xffff,0,param_2 + 6),
                    iVar2 != 0)) &&
             (((ushort)(*(short *)(param_2 + 4) - 0x1eU) < 0xab &&
              ((ushort)(*(ushort *)(param_2 + 6) - 100) < 0x191)))) {
            return (ushort)(*(short *)(param_2 + 4) + 0x14U) <= *(ushort *)(param_2 + 6);
          }
        }
      }
    }
  }
  return false;
}


