/* Firmware entry: 0x4800622e */

undefined4 FUN_ram_4800622e(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (undefined8 *)0x0) {
    puVar3 = (undefined4 *)FUN_ram_4819bf88();
    *puVar3 = 0x16;
    uVar2 = 0xffffffff;
  }
  else {
    if (param_1 == 1) {
      FUN_ram_4ff216d6(&DAT_ram_4ff6da84);
      lVar7 = FUN_ram_48005d3a();
      FUN_ram_4ff216e2(&DAT_ram_4ff6da84);
      lVar8 = FUN_ram_481a9d86();
      uVar4 = (undefined4)(lVar7 + lVar8);
      uVar2 = (undefined4)((ulonglong)(lVar7 + lVar8) >> 0x20);
      uVar5 = __udivdi3(uVar4,uVar2,1000000,0);
      *param_2 = uVar5;
      iVar1 = __umoddi3(uVar4,uVar2,1000000,0);
      *(int *)(param_2 + 1) = iVar1 * 1000;
    }
    else {
      if (param_1 != 4) {
        puVar3 = (undefined4 *)FUN_ram_4819bf88();
        *puVar3 = 0x16;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0xffffffff;
      }
      uVar5 = thunk_FUN_ram_4ff219c4();
      uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uVar6 = __udivdi3((int)uVar5,uVar2,1000000,0);
      *param_2 = uVar6;
      iVar1 = __umoddi3((int)uVar5,uVar2,1000000,0);
      *(int *)(param_2 + 1) = iVar1 * 1000;
    }
    uVar2 = 0;
  }
  return uVar2;
}


