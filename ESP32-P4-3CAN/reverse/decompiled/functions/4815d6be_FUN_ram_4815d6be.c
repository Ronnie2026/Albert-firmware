/* Firmware entry: 0x4815d6be */

bool FUN_ram_4815d6be(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = crc32_le(0xffffffff,param_1,4);
  uVar2 = crc32_le(uVar2,param_1 + 8,0x10);
  iVar3 = crc32_le(uVar2,param_1 + 0x18,8);
  if (iVar1 == iVar3) {
    uVar4 = (uint)*(byte *)(param_1 + 1);
    if (uVar4 < 0x43) {
      if (0x40 < uVar4) {
        if ((uVar4 == 0x42) && (*(char *)(param_1 + 3) == -1)) {
          return false;
        }
LAB_ram_4815d78c:
        if ((0x7dU - param_2 & 0x7ff) << 5 < (uint)*(ushort *)(param_1 + 0x18)) {
          return false;
        }
        if ((0x7eU - param_2 & 0xff) < (uint)*(byte *)(param_1 + 2)) {
          return false;
        }
        return ((*(ushort *)(param_1 + 0x18) + 0x1f >> 5) + 1 & 0xff) ==
               (uint)*(byte *)(param_1 + 2);
      }
      if (uVar4 < 3) {
        if (uVar4 != 0) {
LAB_ram_4815d732:
          return *(char *)(param_1 + 2) == '\x01';
        }
      }
      else {
        uVar5 = uVar4 - 4 & 0xff;
        if (uVar5 < 0x1e) {
          if ((1 << (uVar4 - 4 & 0x1f) & 0x116011U) != 0) goto LAB_ram_4815d732;
          if (uVar5 == 0x1d) goto LAB_ram_4815d78c;
        }
      }
    }
    else if (uVar4 == 0x48) {
      if (*(char *)(param_1 + 2) != '\x01') {
        return false;
      }
      if (*(char *)(param_1 + 3) != -1) {
        return false;
      }
      return *(uint *)(param_1 + 0x18) < 0x7c061;
    }
  }
  return false;
}


