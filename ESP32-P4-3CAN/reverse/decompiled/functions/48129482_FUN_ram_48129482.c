/* Firmware entry: 0x48129482 */

uint FUN_ram_48129482(int param_1,byte *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_2 == (byte *)0x0)) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (param_3 == 0) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      pbVar3 = (byte *)piVar1[8];
      if (pbVar3 != (byte *)0x0) {
        pbVar6 = param_2;
        if (pbVar3 == param_2) {
LAB_ram_481294de:
          return (uint)piVar1 & -(uint)(piVar1[8] != 0);
        }
        while( true ) {
          uVar5 = (uint)*pbVar6;
          uVar7 = uVar5;
          if (((&DAT_ram_4823af31)[uVar5] & 3) == 1) {
            uVar7 = uVar5 + 0x20;
          }
          uVar4 = (uint)*pbVar3;
          pbVar3 = pbVar3 + 1;
          if (((&DAT_ram_4823af31)[uVar4] & 3) == 1) {
            uVar4 = uVar4 + 0x20;
          }
          if (uVar7 != uVar4) break;
          pbVar6 = pbVar6 + 1;
          if (uVar5 == 0) goto LAB_ram_481294de;
        }
      }
    }
  }
  else {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      if ((piVar1[8] == 0) || (iVar2 = FUN_ram_4ff453ae(param_2), iVar2 == 0))
      goto LAB_ram_481294de;
    }
  }
  return 0;
}


