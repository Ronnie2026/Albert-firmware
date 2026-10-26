/* Firmware entry: 0x4ff3e918 */

uint FUN_ram_4ff3e918(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  uVar1 = *param_1;
  uVar7 = param_1[1];
  if (uVar1 < 0x1f) {
    piVar2 = &DAT_ram_4ff58e04 + uVar1 * -5;
    pcVar6 = "prvIsYieldRequiredSMP" + uVar1 * 4;
    do {
      piVar8 = piVar2;
      if ((((uVar1 < 0x19) || (piVar8 = *(int **)pcVar6, piVar8 != (int *)0x0)) &&
          (iVar4 = FUN_ram_4ff3f276(piVar8), iVar4 != 0)) && (*piVar8 != 0)) {
        if (uVar7 == 0) {
          uVar7 = piVar8[3];
        }
        iVar4 = FUN_ram_4ff3f276(uVar7);
        if (iVar4 != 0) {
          uVar3 = *(uint *)(uVar7 + 0xc);
          iVar4 = FUN_ram_4ff3f2ac(uVar3);
          uVar5 = piVar8[4];
          param_1[2] = uVar3 & -(uint)(iVar4 != 0);
          *param_1 = uVar1;
          if (uVar5 == uVar7) {
            *param_1 = uVar1 + 1;
            uVar7 = 0;
          }
          else {
            uVar7 = *(uint *)(uVar7 + 4);
          }
          param_1[1] = uVar7;
          return uVar1;
        }
        uVar7 = 0;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + -5;
      pcVar6 = pcVar6 + 4;
    } while (uVar1 != 0x1f);
  }
  return 0xffffffff;
}


