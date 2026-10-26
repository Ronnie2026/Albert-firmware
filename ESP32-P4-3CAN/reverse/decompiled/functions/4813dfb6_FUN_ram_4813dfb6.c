/* Firmware entry: 0x4813dfb6 */

void FUN_ram_4813dfb6(undefined4 *param_1,int *param_2)

{
  undefined2 uVar1;
  int *piVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = FUN_ram_48137fc8(*(undefined2 *)(param_1[3] + 0xc));
  if ((uVar4 & 1) == 0) {
    do {
      while( true ) {
        iVar5 = *(int *)(param_2[3] + 4);
        if ((int)((((uint)*(ushort *)(param_1 + 2) + DAT_ram_4ff6e1e8) - iVar5) -
                 (uint)*(ushort *)(param_2 + 2)) < 0) {
          if ((int)(iVar5 - ((uint)*(ushort *)(param_1 + 2) + DAT_ram_4ff6e1e8)) < 0) {
            *(short *)(param_1 + 2) = (short)((uint)((iVar5 - DAT_ram_4ff6e1e8) * 0x10000) >> 0x10);
            FUN_ram_4813af5e(param_1[1]);
            *param_1 = param_2;
            return;
          }
          *param_1 = param_2;
          return;
        }
        uVar4 = FUN_ram_48137fc8(*(undefined2 *)(param_2[3] + 0xc));
        if ((uVar4 & 1) == 0) break;
        uVar1 = *(undefined2 *)(param_1[3] + 0xc);
        uVar3 = FUN_ram_48137fc8(1);
        iVar5 = param_1[3];
        *(byte *)(iVar5 + 0xc) = (byte)uVar1 | (byte)uVar3;
        piVar2 = (int *)*param_2;
        *(byte *)(iVar5 + 0xd) = (byte)((ushort)uVar1 >> 8) | (byte)((ushort)uVar3 >> 8);
        FUN_ram_4813c78a(param_2);
        param_2 = piVar2;
        if (piVar2 == (int *)0x0) goto LAB_ram_4813e078;
      }
      piVar2 = (int *)*param_2;
      FUN_ram_4813c78a(param_2);
      param_2 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  else {
    FUN_ram_4813c75e(param_2);
  }
LAB_ram_4813e078:
  *param_1 = 0;
  return;
}


