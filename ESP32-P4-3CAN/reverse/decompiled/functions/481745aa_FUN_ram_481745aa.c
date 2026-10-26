/* Firmware entry: 0x481745aa */

undefined4 FUN_ram_481745aa(int *param_1,undefined4 *param_2,undefined1 *param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = &DAT_ram_48238fe0;
  iVar2 = 5;
  do {
    if (*param_1 == iVar2) {
      *param_2 = 3;
      if (2 < param_4) {
        *param_3 = 3;
        uVar1 = *(undefined2 *)(puVar3 + 1);
        param_3[1] = (char)((ushort)uVar1 >> 8);
        param_3[2] = (char)uVar1;
        return 0;
      }
      return 0xffffb100;
    }
    iVar2 = puVar3[3];
    puVar3 = puVar3 + 3;
  } while (iVar2 != 0);
  return 0xffffb080;
}


