/* Firmware entry: 0x48002030 */

void FUN_ram_48002030(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x1c);
  puVar1 = DAT_ram_4ff6d9b0;
  do {
    if (puVar1 == (uint *)0x0) {
      return;
    }
    while ((puVar1[7] == 0 || (param_2 != ((*puVar1 | puVar1[1] | puVar1[2]) & param_2)))) {
      puVar1 = (uint *)puVar1[8];
      if (puVar1 == (uint *)0x0) {
        return;
      }
    }
    FUN_ram_481a96ae(puVar1[7],&iStack_2c);
    *param_1 = *param_1 + iStack_2c;
    param_1[1] = param_1[1] + iStack_28;
    uVar2 = uStack_24;
    if (uStack_24 < (uint)param_1[2]) {
      uVar2 = param_1[2];
    }
    puVar1 = (uint *)puVar1[8];
    param_1[2] = uVar2;
    param_1[3] = param_1[3] + iStack_20;
    param_1[4] = param_1[4] + iStack_1c;
    param_1[5] = param_1[5] + iStack_18;
    param_1[6] = param_1[6] + iStack_14;
  } while( true );
}


