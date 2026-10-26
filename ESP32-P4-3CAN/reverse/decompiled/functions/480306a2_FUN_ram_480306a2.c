/* Firmware entry: 0x480306a2 */

void FUN_ram_480306a2(undefined4 param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_30 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = &DAT_ram_4ff5c420;
  do {
    puVar2 = puVar1 + 2;
    FUN_ram_4819ad74(puVar1,3,&DAT_ram_481c3b70,*param_2);
    param_2 = param_2 + 1;
    puVar1 = puVar2;
  } while (puVar2 != (undefined *)0x4ff5c460);
  FUN_ram_4802a8a8(auStack_30,&DAT_ram_4ff5c420);
  FUN_ram_4802f236(param_1,"appElfSha256",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  return;
}


