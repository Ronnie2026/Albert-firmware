/* Firmware entry: 0x4ff2d312 */

void FUN_ram_4ff2d312(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = (*(byte *)((int)param_1 + 0xf) & 1) * 4;
  puVar2 = (uint *)(&DAT_ram_4ff6e16c + iVar4);
  if ((uint *)*puVar2 == (uint *)0x0) {
    param_1[6] = 0;
    *puVar2 = (uint)param_1;
    param_1[7] = (uint)puVar2;
    if (param_2 == 0) goto LAB_ram_4ff2d37c;
  }
  else {
    puVar2 = (uint *)*puVar2;
    do {
      puVar3 = puVar2;
      if ((param_1[1] < puVar3[1]) || ((puVar3[1] == param_1[1] && (*param_1 < *puVar3)))) {
        puVar1 = (undefined4 *)puVar3[7];
        param_1[6] = (uint)puVar3;
        param_1[7] = (uint)puVar1;
        *puVar1 = param_1;
        puVar3[7] = (uint)(param_1 + 6);
        goto LAB_ram_4ff2d34e;
      }
      puVar2 = (uint *)puVar3[6];
    } while ((uint *)puVar3[6] != (uint *)0x0);
    param_1[6] = 0;
    puVar3[6] = (uint)param_1;
    param_1[7] = (uint)(puVar3 + 6);
LAB_ram_4ff2d34e:
    if ((param_2 == 0) && (param_1 == *(uint **)(&DAT_ram_4ff6e16c + iVar4))) {
LAB_ram_4ff2d37c:
      FUN_ram_4ff21a32(*param_1,param_1[1]);
      return;
    }
  }
  return;
}


