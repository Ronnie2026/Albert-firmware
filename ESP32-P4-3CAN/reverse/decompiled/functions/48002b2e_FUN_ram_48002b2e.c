/* Firmware entry: 0x48002b2e */

bool FUN_ram_48002b2e(uint *param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_2c [8];
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_1 >> 0x11 & 0x1f;
  FUN_ram_480038ec(param_3,uVar1,auStack_2c);
  if (((uStack_24 & 2) == 0) && (((uStack_24 & 1) == 0 || (param_4 != -1)))) {
    uVar3 = (uint)(short)*param_1;
    uVar4 = (int)uVar3 >> 8 & 0xf;
    if (((uVar4 == 0) || (((int)param_2 >> uVar4 & 1U) != 0)) && ((uVar3 & 1) == 0)) {
      if ((uVar3 & 0xc) == 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("intr_alloc.c",0x134,"is_vect_desc_usable",
                         "!((vd->flags & VECDESC_FL_SHARED) && (vd->flags & VECDESC_FL_NONSHARED))")
        ;
      }
      if ((uVar3 & 8) != 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return false;
      }
      if ((uVar3 & 4) == 0) {
        iVar2 = FUN_ram_481a9e8e(uVar1);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar2 == 0;
      }
      if ((param_2 & 0x100) == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return false;
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return (param_2 >> 10 & 1) == (uVar3 >> 1 & 1);
    }
  }
  return false;
}


