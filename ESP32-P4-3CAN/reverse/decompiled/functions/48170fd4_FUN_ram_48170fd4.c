/* Firmware entry: 0x48170fd4 */

int FUN_ram_48170fd4(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48170c76(param_1,1);
  if (iVar1 == 0) {
    if (param_1[0x1f] == 0x14) {
      puVar2 = (undefined1 *)param_1[0x19];
      param_1[0x11] = param_1[0x14];
      param_1[0xc] = param_1[0xf];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      iVar3 = param_1[0x1a] + 5;
      param_1[0x1b] = param_1[0x1a] + 3;
      param_1[0x1c] = iVar3;
      param_1[0x1d] = iVar3;
      param_1[1] = param_1[1] + 1;
      param_1[0x19] = param_1[0x18];
    }
    else {
      if (*param_1 != 0) {
        if (param_1[0x2f] == 0) {
          param_1[0x2e] = 2;
          param_1[0x2d] = 0x15;
          *(undefined1 *)param_1[0x2c] = 2;
          *(undefined1 *)(param_1[0x2c] + 1) = 10;
          FUN_ram_48170748(param_1,1);
        }
        else {
          FUN_ram_4817069a(param_1);
        }
      }
      iVar1 = -0x7700;
    }
  }
  return iVar1;
}


