#! /bin/sh
#
# Some of these should really be done by man2html
#
# The ~/xxx links don't really work -- netscape doesn't expand the home
# directory of the user running navigator
#

sed -e 's|<B>gnu.psh.bug</B>|<A HREF="news:gnu.psh.bug">gnu.psh.bug</A>|g' \
    -e 's|<I>/bin/psh</I>|<A HREF="file:/bin/psh"><I>/bin/psh</I></A>|g' \
    -e 's|<I>/etc/profile</I>|<A HREF="file:/etc/profile"><I>/etc/profile</I></A>|g' \
    -e 's|<I>~/.psh_profile</I>|<A HREF="file:~/.psh_profile"><I>~/.psh_profile</I></A>|g' \
    -e 's|<I>~/.psh_login</I>|<A HREF="file:~/.psh_login"><I>~/.psh_login</I></A>|g' \
    -e 's|<I>~/.profile</I>|<A HREF="file:~/.profile"><I>~/.profile</I></A>|g' \
    -e 's|<I>~/.pshrc</I>|<A HREF="file:~/.pshrc"><I>~/.pshrc</I></A>|g' \
    -e 's|<I>~/.psh_logout</I>|<A HREF="file:~/.psh_logout"><I>~/.psh_logout</I></A>|g' \
    -e 's|<I>~/.psh_history</I>|<A HREF="file:~/.psh_history"><I>~/.psh_history</I></A>|g' \
    -e 's|<I>~/.inputrc</I>|<A HREF="file:~/.inputrc"><I>~/.inputrc</I></A>|g' \
    -e 's|<I>/etc/inputrc</I>|<A HREF="file:/etc/inputrc"><I>/etc/inputrc</I></A>|g'
