/* Firmware entry: 0x4802188a */

undefined4 FUN_ram_4802188a(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4819ab6a(10);
  uVar1 = FUN_ram_481a704c();
  FUN_ram_4819aaa0("The available total size of heap:%lu\n",uVar1);
  FUN_ram_4819ac1a("\tDescription\tInternal\tSPIRAM");
  iVar2 = FUN_ram_48001f84(4);
  iVar3 = FUN_ram_48001f84(0x400);
  uVar1 = FUN_ram_48001f84(0x400);
  FUN_ram_4819aaa0("Current Free Memory\t%d\t\t%d\n",iVar2 - iVar3,uVar1);
  uVar1 = FUN_ram_480020c6(0x804);
  uVar4 = FUN_ram_480020c6(0x400);
  FUN_ram_4819aaa0("Largest Free Block\t%d\t\t%d\n",uVar1,uVar4);
  uVar1 = FUN_ram_48001fda(0x804);
  uVar4 = FUN_ram_48001fda(0x400);
  FUN_ram_4819aaa0("Min. Ever Free Size\t%d\t\t%d\n",uVar1,uVar4);
  return 0;
}


