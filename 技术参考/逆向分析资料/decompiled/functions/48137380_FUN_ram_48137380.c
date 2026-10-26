/* Firmware entry: 0x48137380 */

undefined4 FUN_ram_48137380(undefined4 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = (int *)FUN_ram_48134b36();
  if (piVar2 != (int *)0x0) {
    iVar5 = *piVar2;
    if (iVar5 != 0) {
      if (param_2 == -0x7ffb9982) {
        if ((param_3 == (uint *)0x0) || (*param_3 == 0)) {
          bVar6 = *(byte *)(iVar5 + 0x30) & 0xfd;
        }
        else {
          bVar6 = *(byte *)(iVar5 + 0x30) | 2;
        }
        *(byte *)(iVar5 + 0x30) = bVar6;
        FUN_ram_48134a50(piVar2);
        return 0;
      }
      if (param_2 == 0x4004667f) {
        if (param_3 == (uint *)0x0) {
          puVar3 = (undefined4 *)FUN_ram_4819bf88();
          *puVar3 = 0x16;
          FUN_ram_48134a50(piVar2);
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0xffffffff;
        }
        FUN_ram_4814e762();
        uVar1 = *(uint *)(*piVar2 + 0x2c);
        FUN_ram_4814e79e();
        piVar4 = (int *)piVar2[1];
        uVar1 = (int)~uVar1 >> 0x1f & uVar1;
        if (piVar4 != (int *)0x0) {
          if ((*(uint *)*piVar2 & 0xf0) == 0x10) {
            uVar1 = uVar1 + *(ushort *)(piVar4 + 2);
          }
          else {
            uVar1 = uVar1 + *(ushort *)(*piVar4 + 8);
          }
        }
        *param_3 = uVar1;
        FUN_ram_48134a50(piVar2);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      puVar3 = (undefined4 *)FUN_ram_4819bf88();
      *puVar3 = 0x58;
      FUN_ram_48134a50(piVar2);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffffff;
    }
    FUN_ram_48134a50();
  }
  puVar3 = (undefined4 *)FUN_ram_4819bf88();
  *puVar3 = 9;
  return 0xffffffff;
}


