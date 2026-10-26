/* Firmware entry: 0x48183b8c */

int FUN_ram_48183b8c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iStack_a4;
  undefined1 auStack_a0 [132];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0 < *(int *)(param_1 + 0x10)) {
    bVar1 = false;
    uVar5 = 0;
    puVar2 = (undefined4 *)(param_1 + 0x14);
    do {
      while( true ) {
        iStack_a4 = 0;
        bVar1 = (bool)(bVar1 | puVar2[4] == 1);
        iVar3 = (*(code *)*puVar2)(puVar2[1],auStack_a0,0x80,&iStack_a4,(code *)*puVar2);
        if (iVar3 != 0) goto LAB_ram_48183c24;
        if (iStack_a4 == 0) break;
        iVar4 = FUN_ram_48183ada(param_1,uVar5 & 0xff,auStack_a0);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar5 = uVar5 + 1;
        puVar2[2] = puVar2[2] + iStack_a4;
        puVar2 = puVar2 + 5;
        if (*(int *)(param_1 + 0x10) <= (int)uVar5) goto LAB_ram_48183c0a;
      }
      uVar5 = uVar5 + 1;
      puVar2 = puVar2 + 5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x10));
LAB_ram_48183c0a:
    if (bVar1) goto LAB_ram_48183c24;
  }
  iVar3 = -0x3d;
LAB_ram_48183c24:
  FUN_ram_48178af2(auStack_a0,0x80);
  return iVar3;
}


