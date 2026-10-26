/* Firmware entry: 0x481935aa */

/* WARNING: Removing unreachable block (ram,0x481937e0) */
/* WARNING: Removing unreachable block (ram,0x481937ea) */
/* WARNING: Removing unreachable block (ram,0x48193806) */
/* WARNING: Removing unreachable block (ram,0x481937f0) */
/* WARNING: Removing unreachable block (ram,0x481937f6) */
/* WARNING: Removing unreachable block (ram,0x48193828) */
/* WARNING: Removing unreachable block (ram,0x481937fe) */
/* WARNING: Removing unreachable block (ram,0x481936d4) */
/* WARNING: Removing unreachable block (ram,0x48193736) */
/* WARNING: Removing unreachable block (ram,0x481936ee) */
/* WARNING: Removing unreachable block (ram,0x481936f4) */
/* WARNING: Removing unreachable block (ram,0x481936fe) */
/* WARNING: Removing unreachable block (ram,0x48193702) */
/* WARNING: Removing unreachable block (ram,0x48193758) */
/* WARNING: Removing unreachable block (ram,0x48193764) */
/* WARNING: Removing unreachable block (ram,0x48193776) */
/* WARNING: Removing unreachable block (ram,0x48193726) */

int FUN_ram_481935aa(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint auStack_40 [4];
  undefined1 auStack_30 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    iVar7 = *(int *)(param_1 + 8);
    auStack_40[1] = 0;
    auStack_40[0] = 0;
    uVar1 = *(uint *)(iVar7 + 0x6c);
    auStack_40[3] = 0;
    auStack_40[2] = 0;
    if (uVar1 < 0x40) {
      uVar6 = 1 << (uVar1 & 0x1f);
      auStack_40[(int)uVar1 >> 5] = auStack_40[(int)uVar1 >> 5] | uVar6;
      auStack_40[((int)uVar1 >> 5) + 2] = uVar6 | auStack_40[((int)uVar1 >> 5) + 2];
    }
    uVar2 = FUN_ram_48194060(param_2,auStack_30);
    iVar3 = FUN_ram_4800e594(uVar1 + 1,0,auStack_40,auStack_40 + 2,uVar2);
    if (((0 < iVar3) && (uVar1 = *(uint *)(iVar7 + 0x6c), uVar1 < 0x40)) &&
       ((1 << (uVar1 & 0x1f) & (auStack_40 + 2)[(int)uVar1 >> 5]) != 0)) {
      uStack_44 = 4;
      uStack_48 = 0;
      FUN_ram_481371ec(uVar1,0xfff,0x1007,&uStack_48,&uStack_44);
      FUN_ram_4819348a(param_1,uStack_48);
      uVar4 = FUN_ram_4ff44d14();
      uVar2 = uStack_48;
      uVar5 = FUN_ram_4819b6f4(uStack_48);
      FUN_ram_4ff44bf0(1,"transport_base",
                       "E (%lu) %s: poll_write select error %d, errno = %s, fd = %d\n",uVar4,
                       "transport_base",uVar2,uVar5,*(undefined4 *)(iVar7 + 0x6c));
      iVar3 = -1;
    }
    return iVar3;
  }
  auStack_40[1] = 0;
  auStack_40[0] = 0;
  auStack_40[3] = 0;
  auStack_40[2] = 0;
  ebreak();
  ebreak();
  return -1;
}


