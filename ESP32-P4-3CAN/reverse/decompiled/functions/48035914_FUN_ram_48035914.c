/* Firmware entry: 0x48035914 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48035914(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_174 [41];
  uint local_d0 [47];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_d0[0] = 0x42345031;
  local_d0[1] = 0xa40014;
  local_d0[2] = 0x1000d01;
  local_d0[3] = 0xf0001;
  local_d0[4] = 0x1010101;
  local_d0[5] = 0x2010101;
  local_d0[6] = 0x200f001;
  local_d0[10] = 0x82008c;
  local_d0[0xc] = 0x10001;
  local_d0[7] = 0x46003c;
  local_d0[0x16] = 0x46003c;
  local_d0[8] = 0x5a0050;
  local_d0[0x17] = 0x5a0050;
  local_d0[9] = 0x780064;
  local_d0[0x18] = 0x780064;
  local_d0[0xb] = 0x10200f0;
  local_d0[0xd] = 0x10301;
  local_d0[0xe] = 0x1f401388;
  local_d0[0xf] = 0x3c003c;
  local_d0[0x10] = 0x500046;
  local_d0[0x12] = 0x3c0078;
  local_d0[0x13] = 0x4d0042;
  local_d0[0x14] = 0x630058;
  local_d0[0x15] = 0x84006e;
  local_d0[0x19] = 0x6e008c;
  local_d0[0x11] = 0x64005a;
  local_d0[0x1a] = 0x820079;
  local_d0[0x1c] = 0x2d0100;
  local_d0[0x1e] = 0x1000001;
  local_d0[0x24] = 0x10001;
  local_d0[0x29] = 0xa3c;
  local_d0[0x2a] = 0x1f40a00;
  local_d0[0x1b] = 0x100;
  local_d0[0x1f] = 0x100;
  local_d0[0x1d] = 0x2000000;
  local_d0[0x20] = 0x10000;
  local_d0[0x27] = 0x100;
  local_d0[0x28] = 0;
  local_d0[0x2b] = 0;
  local_d0[0x21] = 0x20100;
  local_d0[0x22] = 0x4b003e8;
  local_d0[0x23] = 0x12c04b0;
  local_d0[0x26] = 0x753007d0;
  local_d0[0x25] = 0x500;
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  puVar6 = &DAT_ram_4ff61958;
  puVar5 = local_174;
  do {
    uVar1 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *puVar5 = *puVar6;
    puVar5[1] = uVar1;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
    puVar6 = puVar6 + 4;
    puVar5 = puVar5 + 4;
  } while (puVar6 != (uint *)&DAT_ram_4ff619f8);
  *puVar5 = _DAT_ram_4ff619f8;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  puVar6 = local_174;
  puVar5 = local_d0 + 2;
  do {
    uVar1 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *puVar5 = *puVar6;
    puVar5[1] = uVar1;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
    puVar6 = puVar6 + 4;
    puVar5 = puVar5 + 4;
  } while (puVar6 != local_174 + 0x28);
  *puVar5 = *puVar6;
  local_d0[0x2b] = 0x811c9dc5;
  puVar5 = local_d0;
  do {
    uVar1 = *puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    local_d0[0x2b] = (local_d0[0x2b] ^ (byte)uVar1) * 0x1000193;
  } while (local_d0 + 0x2b != puVar5);
  DAT_ram_4ff5cac8._0_2_ = 0;
  DAT_ram_4ff5cad0 = 0;
  DAT_ram_4ff5cac7 = 1;
  DAT_ram_4ff5cacc = 0xb0;
  iVar2 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"B40P101",0,0);
  if (iVar2 != 0) {
    DAT_ram_4ff5cac8._0_2_ = CONCAT11(DAT_ram_4ff5cac8._1_1_,1);
    iVar2 = FUN_ram_48122518(&DAT_ram_4ff6dec8,"config",local_d0,0xb0);
    FUN_ram_48122142(&DAT_ram_4ff6dec8);
    DAT_ram_4ff5cac8._0_2_ = CONCAT11(iVar2 == 0xb0,(undefined1)DAT_ram_4ff5cac8);
    DAT_ram_4ff5cad0 = iVar2;
  }
  return;
}


