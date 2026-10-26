/* Firmware entry: 0x48044bb6 */

undefined4 * FUN_ram_48044bb6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x1b4);
  puVar1 = param_1;
  puVar2 = param_2;
  do {
    fence();
    fence();
    puVar1[6] = *puVar2;
    fence();
    fence();
    puVar1[9] = puVar2[3];
    fence();
    fence();
    puVar1[0xc] = puVar2[6];
    fence();
    fence();
    puVar1[0xf] = puVar2[9];
    fence();
    fence();
    puVar1[0x12] = puVar2[0xc];
    fence();
    fence();
    puVar1[0x15] = puVar2[0xf];
    fence();
    fence();
    puVar1[0x18] = puVar2[0x12];
    fence();
    fence();
    *puVar1 = puVar2[0x15];
    fence();
    fence();
    puVar1[3] = puVar2[0x18];
    fence();
    fence();
    puVar1[0x1b] = puVar2[0x1b];
    fence();
    fence();
    puVar1[0x1e] = puVar2[0x1e];
    fence();
    fence();
    puVar1[0x21] = puVar2[0x21];
    fence();
    fence();
    puVar1[0x24] = puVar2[0x24];
    fence();
    fence();
    puVar1[0x27] = puVar2[0x27];
    fence();
    fence();
    puVar1[0x2a] = puVar2[0x2a];
    fence();
    fence();
    puVar1[0x2d] = puVar2[0x2d];
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (param_2 + 3 != puVar2);
  fence();
  fence();
  param_1[0x30] = param_2[0x30];
  fence();
  fence();
  param_1[0x31] = param_2[0x31];
  fence();
  fence();
  param_1[0x32] = param_2[0x32];
  fence();
  fence();
  param_1[0x33] = param_2[0x33];
  fence();
  fence();
  param_1[0x34] = param_2[0x34];
  return param_1;
}


