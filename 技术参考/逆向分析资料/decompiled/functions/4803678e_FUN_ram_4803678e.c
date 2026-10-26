/* Firmware entry: 0x4803678e */

void FUN_ram_4803678e(undefined4 param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022(param_1,&DAT_ram_481c415c);
  FUN_ram_4802a8a8(auStack_40,&DAT_ram_481c4164);
  ppuVar1 = &PTR_DAT_ram_481c787c_ram_481f55f0;
  puVar2 = param_2;
  do {
    uVar4 = *puVar2;
    FUN_ram_4802f022(auStack_40,*ppuVar1);
    FUN_ram_4802aa44(auStack_30,uVar4,10);
    FUN_ram_4802ae48(auStack_40,auStack_30);
    ppuVar1 = ppuVar1 + 1;
    FUN_ram_4802a59e(auStack_30);
    puVar2 = puVar2 + 1;
  } while (ppuVar1 != &PTR_DAT_ram_481c787c_ram_481f562c);
  if (*(byte *)(param_2 + 0x10) < 0xf) {
    pcVar3 = (&PTR_DAT_ram_481c787c_ram_481f55f0)[*(byte *)(param_2 + 0x10)];
  }
  else {
    pcVar3 = "unknown";
  }
  FUN_ram_4802a8a8(auStack_30,pcVar3);
  FUN_ram_4802f236(auStack_40,&DAT_ram_481c4168,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar4 = param_2[0xf];
  FUN_ram_4802f022(auStack_40,"lastAtUs");
  FUN_ram_4802aa44(auStack_30,uVar4,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802af5a(auStack_40,0x7d);
  FUN_ram_4802ae48(param_1,auStack_40);
  FUN_ram_4802a59e(auStack_40);
  return;
}


