/* Firmware entry: 0x4ff2befc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff2befc(uint param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
                     undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  uVar4 = _DAT_ram_5008d020;
  uVar3 = _DAT_ram_5008d01c;
  uVar2 = _DAT_ram_5008d018;
  uVar1 = _DAT_ram_5008d008;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_44 = param_6;
  if (0x20 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("bootloader_flash.c",0x32d,"bootloader_flash_execute_command_common",
                     "mosi_len <= 32");
  }
  if (param_7 < 0x21) {
    _DAT_ram_5008d008 = 0x200000;
    _DAT_ram_5008d018 = _DAT_ram_5008d018 | 0x80000000;
    uStack_38 = param_1 | _DAT_ram_5008d020 & 0xffff0000;
    _DAT_ram_5008d020 = uStack_38 & 0xfffffff | 0x70000000;
    uStack_34 = _DAT_ram_5008d020;
    iVar6 = FUN_ram_4ff20626();
    if (iVar6 != 0) {
      _DAT_ram_5008d03c = _DAT_ram_5008d03c & 0xfffffffd | (uint)(param_2 == 0x20) << 1;
    }
    uVar7 = (param_2 + -1) * 0x4000000;
    if (param_7 != 0) {
      param_4 = param_4 + (uint)*(byte *)(_DAT_ram_4ffbffe8 + 0x19);
    }
    uVar5 = _DAT_ram_5008d01c & 0x3ffffff | uVar7;
    if (param_4 != 0) {
      uVar5 = _DAT_ram_5008d01c & 0x3ffffc0 | uVar7 | param_4 - 1U & 0x3f;
    }
    _DAT_ram_5008d01c = uVar5;
    _DAT_ram_5008d018 =
         _DAT_ram_5008d018 & 0x97ffffff | (uint)(param_2 != 0) << 0x1e |
         (uint)(param_4 != 0) << 0x1d | (uint)(param_5 != 0) << 0x1b;
    _DAT_ram_5008d004 = param_3;
    if (param_5 == 0) {
      _DAT_ram_5008d024 = _DAT_ram_5008d024 & 0xfffffc00;
    }
    else {
      _DAT_ram_5008d024 = _DAT_ram_5008d024 & 0xfffffc00 | param_5 - 1 & 0x3ff;
      if ((param_5 >> 3) + 3 >> 2 == 1) {
        uStack_3c = 0;
        FUN_ram_4ff45158(&uStack_3c,&uStack_44);
        _DAT_ram_5008d058 = uStack_3c;
      }
    }
    uVar7 = 0;
    if (param_7 != 0) {
      uVar7 = param_7 - 1 & 0x3ff;
    }
    _DAT_ram_5008d028 = _DAT_ram_5008d028 & 0xfffffc00 | uVar7;
    _DAT_ram_5008d000 = _DAT_ram_5008d000 | 0x40000;
    do {
    } while (_DAT_ram_5008d000 != 0);
    uStack_40 = 0;
    _DAT_ram_5008d008 = uVar1;
    _DAT_ram_5008d018 = uVar2;
    _DAT_ram_5008d01c = uVar3;
    _DAT_ram_5008d020 = uVar4;
    if ((param_7 >> 3 & 3) == 0) {
      FUN_ram_4ff45158(&uStack_40,&DAT_ram_5008d058);
    }
    else {
      uStack_3c = _DAT_ram_5008d058;
      FUN_ram_4ff45158(&uStack_40,&uStack_3c);
    }
    if (param_7 != 0x20) {
      uStack_40 = uStack_40 & ~(-1 << (param_7 & 0x1f));
    }
    return uStack_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("bootloader_flash.c",0x32e,"bootloader_flash_execute_command_common",
                   "miso_len <= 32");
}


