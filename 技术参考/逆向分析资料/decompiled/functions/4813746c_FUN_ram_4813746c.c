/* Firmware entry: 0x4813746c */

uint FUN_ram_4813746c(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = (int *)FUN_ram_48134b36();
  if (piVar2 != (int *)0x0) {
    puVar5 = (uint *)*piVar2;
    if (puVar5 != (uint *)0x0) {
      if (param_2 == 3) {
        uVar1 = ((byte)puVar5[0xc] & 2) << 0xd;
        if ((*puVar5 & 0xf0) == 0x10) {
          uVar4 = FUN_ram_4814e762();
          if ((*(int *)(*piVar2 + 8) == 0) ||
             ((*(ushort *)(*(int *)(*piVar2 + 8) + 0x46) & 0x20) != 0)) {
            FUN_ram_4814e79e(uVar4);
          }
          else {
            FUN_ram_4814e79e();
            uVar1 = uVar1 | 2;
          }
        }
        else {
          uVar1 = uVar1 | 2;
        }
      }
      else if ((param_2 == 4) && ((param_3 & 0xffffbffc) == 0)) {
        uVar1 = 0;
        if ((int)(param_3 << 0x11) < 0) {
          *(byte *)(puVar5 + 0xc) = (byte)puVar5[0xc] | 2;
        }
        else {
          *(byte *)(puVar5 + 0xc) = (byte)puVar5[0xc] & 0xfd;
        }
      }
      else {
        puVar3 = (undefined4 *)FUN_ram_4819bf88();
        *puVar3 = 0x58;
        uVar1 = 0xffffffff;
      }
      FUN_ram_48134a50(piVar2);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return uVar1;
    }
    FUN_ram_48134a50();
  }
  puVar3 = (undefined4 *)FUN_ram_4819bf88();
  *puVar3 = 9;
  return 0xffffffff;
}


