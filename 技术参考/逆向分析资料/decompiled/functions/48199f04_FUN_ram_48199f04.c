/* Firmware entry: 0x48199f04 */

int FUN_ram_48199f04(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *apuStack_f8 [2];
  undefined4 uStack_f0;
  ushort uStack_ec;
  undefined2 uStack_ea;
  undefined1 *puStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 auStack_a0 [3];
  undefined4 uStack_94;
  undefined1 auStack_90 [128];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_ec = *(ushort *)(param_2 + 0xc) & 0xfffd;
  uStack_94 = *(undefined4 *)(param_2 + 100);
  uStack_ea = *(undefined2 *)(param_2 + 0xe);
  uStack_d8 = *(undefined4 *)(param_2 + 0x20);
  uStack_d0 = *(undefined4 *)(param_2 + 0x28);
  apuStack_f8[0] = auStack_90;
  uStack_f0 = 0x80;
  uStack_e4 = 0x80;
  uStack_e0 = 0;
  puStack_e8 = apuStack_f8[0];
  FUN_ram_4ff2178e(auStack_a0);
  iVar1 = FUN_ram_48197a62(param_1,apuStack_f8,param_3,param_4);
  if ((-1 < iVar1) && (iVar2 = _fflush_r(param_1,apuStack_f8), iVar2 != 0)) {
    iVar1 = -1;
  }
  if ((uStack_ec & 0x40) != 0) {
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x40;
  }
  FUN_ram_4ff217e8(auStack_a0[0]);
  return iVar1;
}


